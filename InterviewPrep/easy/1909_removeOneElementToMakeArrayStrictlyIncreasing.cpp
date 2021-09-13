/**
 *      file    :  1909_removeOneElementToMakeArrayStrictlyIncreasing.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 27 14:42:55 
 *      lastMod :  Sun 27 Jun 14:42:55 2021 
 **/

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
      int c = 0;

      for (int i = 1; i < nums.size() && c <2; ++i) {
        if (nums[i-1] >= nums[i]) {
          ++c;
          if (i > 1 && nums[i-2] >= nums[i])
            nums[i] = nums[i-1];
        }
      }
      return c < 2;
    }
};
