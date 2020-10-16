/**
 *      file    :  198_houseRob.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 16 23:45:17
 *      lastMod :  Fri Oct 16 23:45:17 2020
**/

class Solution {
public:
    int rob(vector<int>& nums) {
      int odd = 0, even = 0;

      for (int i = 0; i < nums.size(); ++i) {
        if (i & 1)
          odd = max(odd+nums[i], even);
        else
          even = max(even+nums[i], odd);
      }

      return max(even, odd);
    }
};
