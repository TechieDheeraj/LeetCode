/**
 *      file    :  1779_FindNearestPointThatHasXYCord.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Mar 08 01:33:38 
 *      lastMod :  Mon Mar  8 01:33:38 2021 
 **/

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {

      int result = -1;
      int dist = INT_MAX;

      for (int i =0; i < points.size(); ++i) {
        if (x != points[i][0] && y != points[i][1])
          continue;

        int curDist = abs(points[i][0] - x)+ abs(points[i][1] - y);

        if (curDist < dist) {
          dist = curDist;
          result = i;
        }
      }
      return result;
    }
};
