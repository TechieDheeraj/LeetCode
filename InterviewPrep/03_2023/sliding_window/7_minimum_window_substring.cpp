/**
 *      file    :  7_minimum_window_substring.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 20 00:00:45 
 *      lastMod :  Mon Mar 20 00:00:45 2023 
 **/

// https://leetcode.com/problems/minimum-window-substring/

#define MAX_VAL  100001
class Solution {
public:
    string minWindow(string &s, string &t) {
      /*
      int arr[58];
      for (auto &i: arr) {
        i = INT_MIN;
      }
      */
      int l = -1;
      int r = -1;
      vector<int>arr(58, MAX_VAL);
      int res = INT_MAX;
      string str = "";
      int c = 0;

      for (auto &i: t) {
        if (arr[i-'A'] == MAX_VAL) {
          arr[i-'A'] = 0;
          c++;
        }
        arr[i-'A']++;
      }

      int n = s.length();

      for (int i =0, j = 0;j < n;) {
        if (c > 0) {
          if (arr[s[j]-'A'] != MAX_VAL) {
            arr[s[j]-'A']--;
            if (!arr[s[j]-'A']) c--;
          }
          j++;
        } 
        if (c == 0) {
            while (c == 0) {
              if (j-i < res) {
                res = j-i; 
                l = i;
                r = j;
              }
              if (arr[s[i]-'A'] == MAX_VAL) {
                i++;
              } else {
                if (arr[s[i]-'A'] == 0) {
                  c++;
                }
                arr[s[i]-'A']++;
                i++;
              }
            }
        }
      }
      return (l == -1) ? "" : s.substr(l, r-l);
    }

/*
    string minWindow(string &s, string &t) {
      unordered_map<char, int>hm;
      int res = INT_MAX;
      string str = "";

      for (auto &i: t) {
        hm[i]++;
      }
      int n = s.length();
      int c = hm.size();

      for (int i =0, j = 0;j < n;) {
        if (c > 0) {
          if (hm.find(s[j]) != hm.end()) {
            hm[s[j]]--;
            if (!hm[s[j]]) c--;
          }
          j++;
        } 
        if (c == 0) {
            while (c == 0) {
              if (j-i < res) {
                res = min(res, (j-i)); 
                str = s.substr(i, j-i);
              }
              if (hm.find(s[i]) == hm.end()) {
                i++;
              } else {
                if (hm[s[i]] < 0) {
                  hm[s[i]]++;
                  i++;
                } else {
                  hm[s[i]]++;
                  i++;
                  c++;
                }
              }
            }
        }
      }
      return str;
    }
    */
};

