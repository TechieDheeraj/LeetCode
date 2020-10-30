/**
 *      file    :  137_SingleNoII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 30 23:33:54
 *      lastMod :  Fri Oct 30 23:33:54 2020
**/

// REF: https://leetcode.com/problems/single-number-ii/discuss/43295/Detailed-explanation-and-generalization-of-the-bitwise-operation-method-for-single-numbers

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int x1 = 0, x2 = 0, mask = 0;

    for (int i : nums) {
       x2 ^= x1 & i;
       x1 ^= i;
       mask = ~(x1 & x2);
       x2 &= mask;
       x1 &= mask;
    }

      return x1;

      /*

      vector<int>bits(31);
      int num = 0;

      for (int i = 0 ; i < nums.size(); ++i) {
        int n = nums[i];
        if (n == 0)
          continue;

        for (int j =0; j < bits.size(); ++j) {
          if (n & 1)
            bits[j] += 1;
          n >>= 1;
        }
      }

      for (int i = 0 ; i < bits.size(); ++i) {
        if (bits[i] == 0)
          continue;

        if (bits[i] % 3 == 1)
          num |= (1 << i);
      }
      return num;
      */
    }
};

