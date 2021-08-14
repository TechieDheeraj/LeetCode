/**
 *      file    :  540_singleElementInASortedArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 14 23:44:42 
 *      lastMod :  Sat 14 Aug 23:44:42 2021 
 **/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      /*
      int num = nums[0];
      for (int i= 1; i< nums.size(); ++i) {
        num^=nums[i];
      }
      return num;

        */

      int l = 0;
      int r = nums.size()-1;
      while(r > l) {
        int m = (r+l)/2;
        if (nums[m] == nums[m^1])
          l = m+1;
        else
          r = m;
      }
      return nums[l];
    }
};
