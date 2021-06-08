/**
 *      file    :  48_rotateImage.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 09 01:06:32 
 *      lastMod :  Wed  9 Jun 01:06:32 2021 
 **/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int r = matrix.size();
      int c = matrix[0].size();

      // transpose of matrix and reverse of each row
      for (int i =0; i < r; ++i) {
        for (int j =i; j < c; ++j) {
          swap(matrix[i][j], matrix[j][i]);
        }
      }

      for(auto &row: matrix) {
        reverse(row.begin(), row.end());
      }
    }
};
