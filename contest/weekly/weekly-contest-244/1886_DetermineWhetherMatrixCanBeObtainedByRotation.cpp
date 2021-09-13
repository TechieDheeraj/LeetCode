/**
 *      file    :  1886_DetermineWhetherMatrixCanBeObtainedByRotation.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 06 20:32:11 
 *      lastMod :  Sun  6 Jun 20:32:11 2021 
 **/

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

      /*
      if (mat == target)
        return true;

      int r = mat.size();
      int c = mat[0].size();
      int deg = 3; // try all the rotation: 90, 180, 270

      // one rotation is 90

      while(deg--) {
        for (int i = 0; i< r; ++i) {
          for (int j = i; j< c; ++j) {
            swap(mat[i][j], mat[j][i]); // transpose of matrix
          }
        }
        for (int i = 0; i< r; ++i)
          reverse(mat[i].begin(), mat[i].end());
        if (mat == target)
          return true;
      }
      return false;
    */

      vector<int>mr(mat.size()), mc(mat[0].size()), tr(target.size()), tc(target[0].size());

      for (int i = 0; i < mat.size(); ++i) {
        for (int j = 0; j < mat.size(); ++j) {
          mr[i] += mat[i][j];
          mc[j] += mat[i][j];
          tr[i] += target[i][j];
          tc[j] += target[i][j];
        }
      }

      vector<int>revmc(rbegin(mc), rend(mc)), revmr(rbegin(mr), rend(mr));
      return (mc == tc && mr == tr) || (revmr == tr && revmc == tc) || (revmr == tc && mc == tr)
            || (revmc == tr && mr == tc);

    }
};
