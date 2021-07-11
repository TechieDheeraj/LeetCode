/**
 *      file    :  523_continuousSubArraySum.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jul 11 12:29:58 
 *      lastMod :  Sun 11 Jul 12:29:58 2021 
 **/

class Solution {
public:
  /* Bruteforce stuck in TLE */
  /*
    bool checkSubarraySum(vector<int>& nums, int k) {
      for (int i =0 ; i< nums.size()-1; ++i) {
        int sum = nums[i];
        for (int j = i+1 ; j< nums.size(); ++j) {
          sum+=nums[j];
          if ((sum % k) == 0)
            return true;
        }
      }
      return false;
    }
    */
    bool checkSubarraySum(vector<int>& nums, int k) {

      unordered_map<int, int>hm{{0, -1}};

      int sum = 0;
      for (int i = 0;i < nums.size(); ++i) {
        sum+=nums[i];
        sum%=k;

        if(hm.count(sum) > 0) {
          if (i-hm[sum] > 1)
            return true;
        } else {
          hm[sum] = i;
        }
      }
      return false;
    }
};
