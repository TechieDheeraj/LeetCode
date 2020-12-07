/**
 *      file    :  59_spiralMatrixII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 08 02:28:29
 *      lastMod :  Tue Dec  8 02:28:29 2020
 **/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>matrix(n, vector<int>(n));
      int m = matrix.size();
      int k = matrix[0].size();

      int rowb = 0;
      int rowe = m-1;
      int colb = 0;
      int cole = k-1;

      int c = 1;

      while (rowb <= rowe && colb <= cole) {
       //traverse right
        for (int i = colb; i <= cole; ++i)
          matrix[rowb][i] = c++;
        rowb++;

       //traverse bottom
        for (int i = rowb; i <= rowe; ++i)
          matrix[i][cole] = c++;
        cole--;

       //traverse left
        if (rowb <= rowe) {
          for (int i = cole; i >= colb; --i)
            matrix[rowe][i] = c++;
          rowe--;
        }

       //traverse up
        if (colb <= cole) {
          for (int i = rowe; i >= rowb; --i)
            matrix[i][colb] = c++;
          colb++;
        }

      }
      return matrix;

    }
};
