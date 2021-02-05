/**
 *      file    :  830_positionOfLargeGroups.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 06 01:04:33 
 *      lastMod :  Sat Feb  6 01:04:33 2021 
 **/

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {

      int i =0, n = s.length();
      vector<vector<int>>result;

      for (int j = 0; j < n; ++j) {
        if (j == n-1 || s[j] != s[j+1]) {
          if (j-i+1 >= 3)
            result.push_back({i, j});
          i = j+1;
        }
      }
      return result;
    }
};
