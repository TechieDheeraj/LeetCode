/**
 *      file    :  1480_runningSumOf1DArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 May 03 20:36:46 
 *      lastMod :  Mon May  3 20:36:46 2021 
 **/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

      if (nums.size() == 1)
        return nums;

      for (int i = 1; i < nums.size(); ++i) {
        nums[i] += nums[i-1];
      }

      return nums;

    }
};
