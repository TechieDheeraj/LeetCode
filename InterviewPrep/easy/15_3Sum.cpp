/**
 *      file    :  15_3Sum.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 25 00:09:42 
 *      lastMod :  Wed 25 Aug 00:09:42 2021 
 **/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      sort(begin(nums), end(nums));
      vector<vector<int>>res;
      for(int i = 0;i < nums.size(); ++i) {
        if (i == 0 || nums[i] != nums[i-1])
          twoSum(nums,i, res);
      }
      return res;
    }

    void twoSum(vector<int>&nums, int i, vector<vector<int>>&res) {
      int l = i+1;
      int r = nums.size()-1;

      while(l < r) {
        int sum = nums[l]+nums[r]+nums[i];
        if (sum == 0) {
          res.push_back({nums[l++], nums[r--], nums[i]});
          while(l < r && nums[l] == nums[l-1]) l++;
        }
        else if (sum < 0)
          l++;
        else
          r--;
      }
    }
};
