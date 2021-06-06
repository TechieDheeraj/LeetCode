/**
 *      file    :  1887_ReductionOperationToMakeArrayElementEqual.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 06 12:39:11 
 *      lastMod :  Sun Jun  6 12:39:11 2021 
 **/

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
      int res = 0;
      int sz = nums.size();
      sort(nums.begin(), nums.end());

      for (int i = sz-1; i >0; --i) {
        if (nums[i-1] != nums[i])
          res += sz-i;
      }
      return res;
    }
};
