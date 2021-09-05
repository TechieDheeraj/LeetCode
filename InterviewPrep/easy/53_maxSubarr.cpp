/**
 *      file    :  53_maxSubarr.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 10:57:14 PM
 *      lastMod :  Wed 14 Oct 2020 10:57:14 PM IST
**/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  
      int cur_sum = 0;
      int max_sum = INT_MIN;
      //kadane's algorithm

      for (int i = 0;i < nums.size(); ++i) {
        cur_sum+=nums[i];
        if (cur_sum > max_sum)
          max_sum = cur_sum;
        if (cur_sum < 0)
          cur_sum = 0;
      }
      return max_sum;
    }

    /*
      int res = nums[0];
      int size = nums.size();
      int sum = 0;
      
      if (size == 1)
        return nums[0];
      
      for (int i = 0; i < size; ++i) {
        sum += nums[i];
        res = max(sum, res); 
        sum = max(sum, 0);
      }
      return res;
      */

/*      
      int size = nums.size();
      int gmax = INT_MIN;
      int sum = 0;
      if (size == 1)
        return nums[0];
      
      for (int i = 0; i < size; ++i) {
        int max = nums[i]; 
        sum = nums[i];
        for (int j = i+1; j < size; ++j) {
          sum += nums[j];
          if (sum == 0)
            break;
          if (sum > max) {
            max = sum; 
          }
        } 
        gmax = max > gmax ? max : gmax;
      }
      return gmax;
/
}
};
