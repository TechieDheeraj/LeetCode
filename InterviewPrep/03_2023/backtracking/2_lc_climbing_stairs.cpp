/**
 *      file    :  2_lc_climbing_stairs.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 29 02:35:06 
 *      lastMod :  Wed Mar 29 02:35:06 2023 
 **/
// TLE with Backtracking: https://leetcode.com/problems/climbing-stairs/description/
class Solution {
public:
    int count = 0;
    vector<string>getPaths(const int n) {
      if (n == 0) {
        vector<string>r(1, "");
        return r;
      } else if (n < 0) {
        vector<string>r;
        return r;
      }
    
      auto path1 = getPaths(n-1);
      auto path2 = getPaths(n-2);

      vector<string>res; 
      for(auto &i: path1) {
        res.push_back('1'+i);
      }
      for(auto &i: path2) {
        res.push_back('2'+i);
      }
      return res;
    }

    int climbStairs(int n) {
      unordered_set<string>hs;
      auto result = getPaths(n);
      for (auto &i: result) {
        hs.insert(i);
      }
      return hs.size();

    /*
      if (n == 0) {
        return count++;
      } else if (n < 0) {
        return count;
      }
      climbStairs(n-1);
      climbStairs(n-2);
      return count;
      */
    }
};
