/**
 *      file    :  54_spiralMatrix.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 08 02:21:21
 *      lastMod :  Tue Dec  8 02:21:21 2020
 **/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();

      int rowb = 0;
      int rowe = m -1;
      int colb = 0;
      int cole = n -1;

      vector<int> result;

      while (rowb <= rowe && colb <= cole) {
       //traverse right
        for (int i = colb; i <= cole; ++i)
          result.push_back(matrix[rowb][i]);
        rowb++;

       //traverse bottom
        for (int i = rowb; i <= rowe; ++i)
          result.push_back(matrix[i][cole]);
        cole--;

       //traverse left
        if (rowb <= rowe) {
          for (int i = cole; i >= colb; --i)
            result.push_back(matrix[rowe][i]);
          rowe--;
        }

       //traverse up
        if (colb <= cole) {
          for (int i = rowe; i >= rowb; --i)
            result.push_back(matrix[i][colb]);
          colb++;
        }

      }
      return result;
    }
};
