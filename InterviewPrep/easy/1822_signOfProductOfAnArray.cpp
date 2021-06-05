/**
 *      file    :  1822_signOfProductOfAnArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 05 23:58:39 
 *      lastMod :  Sat  5 Jun 23:58:39 2021 
 **/

class Solution {
public:
    int arraySign(vector<int>& nums) {
      int count = 0;
      for (auto &i : nums) {
        if (i == 0) return 0;
        if (i < 0) count++;
      }
      if (count & 1) return -1;
      else return 1;
    }
};
