/**
 *      file    :  1920_buildArrayFromPermutation.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jul 04 12:24:15 
 *      lastMod :  Sun  4 Jul 12:24:15 2021 
 **/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
      vector<int>ans(nums.size(), 0);

      for (int i = 0; i < nums.size(); ++i ) {
        ans[i] = nums[nums[i]];
      }

      return ans;
    }
};
