/**
 *      file    :  645_setMismatch.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 07 23:32:21 
 *      lastMod :  Sun Feb  7 23:32:21 2021 
 **/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      vector<int>res;

      for (int i = 0; i < nums.size(); ++i) {
        if (nums[abs(nums[i])-1] < 0) {
          res.push_back(abs(nums[i]));
          continue;
        }
        nums[abs(nums[i])-1] *= -1;
      }

      for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0)
          res.push_back(i+1);
      }
      return res;
    }
};
