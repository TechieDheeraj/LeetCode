/**
 *      file    :  448_findDisappear.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:34:49
 *      lastMod :  Wed Oct 14 01:34:49 2020
**/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      vector<int> results;
      int n = nums.size();
      int tmp = 0;

      for (int i=0; i < n; ++i) {
        tmp = abs(nums[i]);

        if (nums[tmp-1] >= 1)
          nums[tmp-1] *= -1;
      }

      for (int i= 0; i < n; ++i) {
        if (nums[i] > 0)
          results.push_back(i+1);
      }

      return results;
    }
};
