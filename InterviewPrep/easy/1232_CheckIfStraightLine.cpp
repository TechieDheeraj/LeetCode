/**
 *      file    :  1232_CheckIfStraightLine.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 07 00:32:02
 *      lastMod :  Mon Dec  7 00:32:02 2020
 **/

public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      if (coordinates.size() <= 2)
        return true;

    /*
  SOL 1:

      if there are three points in straight line ... slope between any pairs of points should be same

            y-y1     y-y2
           ------ = ------
            x-x1     x-x2

   SOL 2 :
          Area of triangle formed by three points should be zero then those points lie in straight line
    */

      int x1 = coordinates[0][0];
      int y1 = coordinates[0][1];
      int x2 = coordinates[1][0];
      int y2 = coordinates[1][1];

      for(int i = 2; i< coordinates.size(); ++i) {
        int x = coordinates[i][0];
        int y = coordinates[i][1];

        if ((y-y1) * (x-x2) != (y-y2) * (x-x1))
          return false;
      }
      return true;
    }
};
