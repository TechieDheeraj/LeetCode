/**
 *      file    :  26_removeDuplicatesFromSortedArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 15 23:35:44 
 *      lastMod :  Tue 15 Jun 23:35:44 2021 
 **/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.size() <= 1) return nums.size();

      int prev = nums[0];
      int unique = 1;
      for (int i= 1; i < nums.size(); ++i) {
        if (nums[i] == prev)
          continue;
        else {
          nums[unique] = nums[i];
          unique++;
          prev = nums[i];
        }
      }
      return unique;
    }
};
