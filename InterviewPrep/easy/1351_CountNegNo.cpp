/**
 *      file    :  1351_CountNegNo.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 23 01:10:12
 *      lastMod :  Fri Oct 23 01:10:12 2020
**/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

      int count = 0;
      int size = grid[0].size()-1;

      for (auto i : grid) {
        for (int j = size; j >= 0 ; --j ) {
          if (i[j] < 0) count++;
          else
             break;
        }
      }
      return count;
    }
;
