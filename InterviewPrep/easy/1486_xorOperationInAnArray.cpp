/**
 *      file    :  1486_xorOperationInAnArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 06 01:32:51 
 *      lastMod :  Sat Feb  6 01:32:51 2021 
 **/

class Solution {
public:
    int xorOperation(int n, int start) {
      int res = 0;
      for (int i = 0; i < n; ++i) {
        auto var = start + 2 * i;
        res ^= var;
      }

      return res;
    }
};
