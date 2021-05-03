/**
 *      file    :  1848_minDistanceToTargetElement.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 May 03 20:50:22 
 *      lastMod :  Mon May  3 20:50:22 2021 
 **/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

      int result = INT_MAX;
      for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
          result = min(result ,abs(i-start));
        }
      }
      return result;
    }
};
