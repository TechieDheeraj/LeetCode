/**
 *      file    :  1637_widestVerticalArea.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 31 21:47:27
 *      lastMod :  Sat Oct 31 21:47:27 2020
**/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {

      vector<int> result;
      int maxe = INT_MIN;

      for (int i = 0; i < points.size(); ++i) {
        result.push_back(points[i][0]);
      }

      sort(result.begin(),result.end());

      for (int i = 0; i < result.size()-1 ; ++i) {
        maxe = max(maxe, result[i+1]-result[i]);
      }

      return maxe;
    }
};
