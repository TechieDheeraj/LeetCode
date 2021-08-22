/**
 *      file    :  167_twoSumII.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 22 13:05:33 
 *      lastMod :  Sun 22 Aug 13:05:33 2021 
 **/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
      int l = 0;
      int r = nums.size()-1;

      while(l < r) {
        if (nums[l]+nums[r] ==t)
          return {l+1, r+1};
        if (nums[l]+nums[r] > t)
          r--;
        else
          l++;
      }
      return {};
    }
};
