/**
 *      file    :  283_moveZeros.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:33:56
 *      lastMod :  Wed Oct 14 01:33:56 2020
**/

class Solution {
  public:
  void moveZeroes(vector<int>& nums) {
    int start = 0;
    int size = nums.size();

    for (int i = 0; i < size; ++i) {
      if (nums[i] != 0) {
        if (i != start) {
          nums[i] ^= nums[start];
          nums[start] ^= nums[i];
          nums[i] ^= nums[start];
        }
        start++;
      }
    }
  }
};
