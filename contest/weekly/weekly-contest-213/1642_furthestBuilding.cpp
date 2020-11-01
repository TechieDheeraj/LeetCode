/**
 *      file    :  1642_furthestBuilding.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 10:20:21
 *      lastMod :  Sun Nov  1 10:20:21 2020
**/

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {

      int count = 0;

        for (int i = 0; i < heights.size()-1; ++i) {
          if (heights[i] < heights[i+1]) {
            if (heights[i]+bricks >= heights[i+1]) {
              count++;
              bricks-=(heights[i+1]-heights[i]);
            }
            else if (ladders > 0) {
              ladders--;
              count++;
            }
            else
              break;
          }
          else
            count++;
        }
      return count;
    }
};
