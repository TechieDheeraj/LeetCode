/**
 *      file    :  41_firstMissingPositive.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 07 13:02:56 
 *      lastMod :  Sun Feb  7 13:02:56 2021 
 **/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

      // change all the numbers <= 0 and greater than n.. as we don't care about them
      int n = nums.size();

      for (int i = 0; i < n; ++i) {
        if (nums[i] <= 0 || nums[i] > n)
          nums[i] = n+1;
      }

      // now set pos to -ve as we traverse the array
      for (int i = 0; i < n; ++i) {
        int num = abs(nums[i]);

        if (num > n)
          continue;
        num--; // as array start from 0
        if (nums[num] > 0) // to avoid duplicate numbers
          nums[num] *= -1;
      }

      for (int i =0; i < n; ++i) {
        if (nums[i] > 0)
          return i+1; // return first missing positive number
      }

      return n+1;
    }
};

// second attempt

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      bool isOne = false;
      int n = nums.size();

      for (auto &i:nums) {
        if (i == 1)
          isOne = true;
        if (i <= 0 || i > n)
          i = 1;
      }

      if (!isOne)
        return 1;

      for (int i = 0;i < n; ++i) {
        if(nums[abs(nums[i])-1] < 0)
          continue;

        nums[abs(nums[i])-1]*=-1;
      }

      for (int i =0; i< n; ++i) {
        if (nums[i] > 0)
          return i+1;
      }
      return n+1;
    }
};
