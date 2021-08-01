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

// second solution
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int idx = 0;
      bool isZero = false;
      if (nums.size() == 1) return;

      for (int i = 0;i < nums.size(); ++i) {
        if (nums[i] != 0) {
          if (i == 0)
            idx = 1;
          else if (isZero) {
            nums[idx] = nums[i];
            nums[i] = 0;
            idx++;
          }
          else
            idx++;
        } else
          isZero = true;
      }
    }
};
