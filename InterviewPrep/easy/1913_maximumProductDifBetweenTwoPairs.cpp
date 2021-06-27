/**
 *      file    :  1913_maximumProductDifBetweenTwoPairs.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 27 14:41:53 
 *      lastMod :  Sun 27 Jun 14:41:53 2021 
 **/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int s = nums.size();
      return (nums[s-1]*nums[s-2] - (nums[0] * nums[1]));

    }
};
