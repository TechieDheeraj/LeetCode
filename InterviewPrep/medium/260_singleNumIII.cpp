/**
 *      file    :  260_singleNumIII.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 08 00:28:29 
 *      lastMod :  Mon Feb  8 00:28:29 2021 
 **/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      unsigned int bitmask = 0;

      for (auto&i : nums)
        bitmask ^= i;

      int lastSet = bitmask & -bitmask;
      int x = 0;

      for (int i = 0; i < nums.size(); ++i) {
        if ((nums[i] & lastSet) != 0)
          x^=nums[i];
      }

      return {x, static_cast<int>(bitmask^x)};
    }
};
