/**
 *      file    :  766_toeplitzMatrix.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 30 01:37:14
 *      lastMod :  Fri Oct 30 01:37:14 2020
**/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

      int size = matrix.size();
      for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < matrix[0].size() - 1; ++j) {
          if (matrix[i][j] != matrix[i+1][j+1])
            return false;
        }
      }
      return true;
    }
};
