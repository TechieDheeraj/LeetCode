/**
 *      file    :  35_searchInsertPos.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 03 02:09:24
 *      lastMod :  Tue Nov  3 02:09:24 2020
**/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

      int i = 0;
      for (i = 0; i < nums.size(); ++i) {
        if (nums[i] == target)
          return i;
        if (nums[i] > target)
          return i;
      }
      return i;
    }
};
