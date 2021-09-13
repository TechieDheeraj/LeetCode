/**
 *      file    :  74_searchA2DMatrix.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 15 13:52:39 
 *      lastMod :  Sun 15 Aug 13:52:39 2021 
 **/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int t) {
      int m = ma.size();
      int n = ma[0].size();
      if(m == 1 && m == n) {
        if (ma[0][0] == t)
          return true;
        else
          return false;
      }

      int l = 0;
      int r = m-1;

      while (l < r) {
        int mid = l+((r-l)/2);
        if (ma[mid][n-1] == t)
          return true;
        else if (ma[mid][n-1] < t)
          l = mid+1;
        else
          r = mid;
      }
      int row = r;
      l = 0;
      r = n-1;

      while(l < r) {
        int mid= l+((r-l)/2);
        if (ma[row][mid] == t)
          return true;
        else if (ma[row][mid] < t)
          l = mid+1;
        else
          r = mid;
      }

      return (ma[row][l] == t) ? true: false;
    }
};
//second solution

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int t) {
      int m = ma.size();
      int n = ma[0].size();
      int l = 0;
      int r = (m * n) -1;

      while(l <= r) {
        int mid = l+ ((r-l)/2);
        int row = mid/n;
        int col = mid % n;
        if (ma[row][col] == t)
          return true;
        else if (ma[row][col] > t)
          r = mid-1;
        else
          l = mid+1;
      }
      return false;
    }
};
