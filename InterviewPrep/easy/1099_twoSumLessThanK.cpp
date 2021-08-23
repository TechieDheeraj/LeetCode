/**
 *      file    :  1099_twoSumLessThanK.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 23 12:15:09 
 *      lastMod :  Mon 23 Aug 12:15:09 2021 
 **/

class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {

      sort(begin(nums), end(nums));
      int l = 0;
      int r = nums.size()-1;
      int res = INT_MIN;

      while(l < r) {
        if (nums[l]+nums[r] >= k)
          r--;
        else if (nums[l]+nums[r] < k) {
          res = max(res, nums[l]+nums[r]);
          l++;
        }
      }
      return (res == INT_MIN) ? -1: res;
    }
};
