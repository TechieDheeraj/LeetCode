/**
 *      file    :  1646_GetMaxGenArray.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 16 13:46:56
 *      lastMod :  Mon Nov 16 13:46:56 2020
**/

class Solution {
public:
    int getMaximumGenerated(int n) {

      if (n == 0)
        return 0;
      if (n == 1)
        return 1;
      vector<int>nums(n+1);

      nums[0] = 0;
      nums[1] = 1;
      int j = 2;
      int maxe = 1;

      for (int i = 2; i < n+1; ++i) {
        if ((i & 1) == 0) {
          nums[i] = nums[i/2];
        }
        else
          nums[i] = nums[i/2]+nums[(i+1)/2];

        maxe = max(maxe, nums[i]);
      }

      return maxe;
    }
};
