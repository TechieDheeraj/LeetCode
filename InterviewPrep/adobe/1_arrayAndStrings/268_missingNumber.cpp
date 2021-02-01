/**
 *      file    :  268_missingNumber.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 01 17:28:55 
 *      lastMod :  Mon Feb  1 17:28:55 2021 
 **/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

      /*
      int missing = nums.size();
      for (int i = 0; i < nums.size(); ++i) {
        missing ^= i ^ nums[i];
      }

      return missing;
      */

      int reqSum = (nums.size() * (nums.size() + 1))/2;
      int actualSum = 0;
      for (auto& i : nums)
        actualSum+=i;

      return abs(reqSum-actualSum);

    /*
      This will work if the 0 <= nums[i] < 64

      unsigned long long int n = 0;
      unsigned long long int l = 1;
      int size = nums.size();

      for (int i = 0; i < size; ++i) {
        n |= l << nums[i];
      }

      int count = 0;
      for (int i = 0; i <= size; ++i) {
        if (! (n & 1))
          return i;
        n>>=1;
      }
      return -1;
      */
    }
};
