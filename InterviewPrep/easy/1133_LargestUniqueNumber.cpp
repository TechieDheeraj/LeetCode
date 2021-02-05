/**
 *      file    :  1133_LargestUniqueNumber.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 06 01:31:01 
 *      lastMod :  Sat Feb  6 01:31:01 2021 
 **/

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
      unordered_map<int, int>hm;
      for (auto&i : A)
        hm[i]++;
      int res = INT_MIN;
      for (auto it = hm.begin(); it!= hm.end(); ++it) {
        if (it->second == 1)
          res = max(res, it->first);
      }
      return res == INT_MIN ? -1 : res;
    }
};
