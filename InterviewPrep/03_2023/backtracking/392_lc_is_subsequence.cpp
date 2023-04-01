/**
 *      file    :  392_lc_is_subsequence.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Apr 01 21:39:51 
 *      lastMod :  Sat Apr  1 21:39:51 2023 
 **/

// Implemented  https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    vector<string> gss(string &t) {
      if (t.length() == 0) {
        vector<string>res;
        res.push_back("");
        return res;
      }
      char ch = t[0];
      string new_str = t.substr(1);

      vector<string>res = gss(new_str);
      vector<string>mres;
      for (auto &i: res) {
        mres.push_back(""+i);
      }

      for (auto &i: res) {
        mres.push_back(ch+i);
      }
      return mres;
    }

    bool isSubsequence(string s, string t) {
      auto res = gss(t);

      for(auto &i: res) {
        cout << " value is " << i << endl;
        if (s == i) {
          return true;
        }
      }
      return false;
    }
};


// Tried to optimize
struct Result {
  vector<string>res;
  bool is_found;
};

class Solution {
public:
    struct Result gss(string &t, string &s) {
      if (t.length() == 0) {
        struct Result result;
        result.is_found = false;
        result.res.push_back("");
        return result;
      }
      char ch = t[0];
      string new_str = t.substr(1);
      
      auto rresult = gss(new_str, s);
      struct Result mres{{}, false};
      if (rresult.is_found) {
        mres.is_found = true;
        return mres; 
      }
      
      for (auto &i: rresult.res) {
        mres.res.push_back(""+i);
        if (s == ""+i) {
          mres.is_found = true;
        }
      }

      for (auto &i: rresult.res) {
        if (s == ch+i || rresult.is_found) {
          mres.is_found = true;
        }
        mres.res.push_back(ch+i);
      }
      return mres;
    }

    bool isSubsequence(string &s, string &t) {
      if (s == "" && t == "") {
        return true; 
      }
      auto res = gss(t, s);
      return res.is_found;

/*
      for(auto &i: res) {
        if (s == i) {
          return true;
        }
      }
      return false;
      */
    }
};
