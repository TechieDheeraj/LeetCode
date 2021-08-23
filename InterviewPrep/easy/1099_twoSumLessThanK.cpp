/**
 *      file    :  1099_twoSumLessThanK.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 23 12:15:09 
 *      lastMod :  Mon 23 Aug 12:15:09 2021 
 **/

class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {

      /*
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
      */
      int ans = -1;
      int arr[1001] = {};

      for(auto&i: nums)
        arr[i]++;

      int l = 1;
      int r = 1000;

      while(l <= r) { // elements could be duplicated so need to check count if l == r
        if (arr[l] > k/2)
          break;
        if (arr[r] == 0 || (l+r) >= k)
          r--;
        else {
          if (arr[l] > (l < r ? 0: 1)) {
            ans = max(ans, l+r);
          }
          l++;
        }
      }
      return ans;
    }
};
