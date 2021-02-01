/**
 *      file    :  11_containerWithMostWater.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 01 16:45:34 
 *      lastMod :  Mon Feb  1 16:45:34 2021 
 **/

class Solution {
public:
    int maxArea(vector<int>& height) {
      int res = INT_MIN;

      /*
      for (int k = 0; k < height.size()-1; ++k) {
        for (int l = k+1; l < height.size(); ++l)
          res = max(res, min(height[k], height[l])*(l-k));
      }
      */
      int l = 0;
      int r = height.size()-1;

      while(l < r) {
        res = max(res, min(height[l], height[r])*(r-l));
        if (height[l] < height[r])
          l++;
        else
          r--;
      }

      return res;
    }
};
