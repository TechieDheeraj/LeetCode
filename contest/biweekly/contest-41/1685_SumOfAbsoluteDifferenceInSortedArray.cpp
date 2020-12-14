/**
 *      file    :  1685_SumOfAbsoluteDifferenceInSortedArray.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 14 23:52:51
 *      lastMod :  Mon Dec 14 23:52:51 2020
 **/

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
      vector<int>results(nums.size());
      int sum = 0;
      int sub = 0;
      int n = nums.size();
      for (auto &j : nums)
        sum+=j;

      for (int i =0; i < n; ++i) {
        sum-=nums[i];
        results[i] = sub + ( i* nums[i]) - ((n-i-1)*nums[i]) + sum;
        sub-=nums[i];
      }
      return results;
    }
};
