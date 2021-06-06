/**
 *      file    :  1887_ReductionOperationsToMakeArrayElementsEqual.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 06 20:31:18 
 *      lastMod :  Sun  6 Jun 20:31:18 2021 
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
