/**
 *      file    :  200_numberOfIslands.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Sep 14 01:18:57 
 *      lastMod :  Tue 14 Sep 01:18:57 2021 
 **/

class Solution {
  public:
  int M, N;
  bool isValid(int x, int y) {
    if (x < 0 || x >= M || y < 0 || y >= N) {
      return false;
    }
    return true;
  }

  int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    if (m == 0) return 0;
    int n = grid[0].size();
    int count = 0;
    M = m;
    N = n;
    vector<vector<int>>visited(m, vector<int>(n, 0));
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 0;i < m; ++i) {
      for (int j = 0; j< n; ++j) {
        if (grid[i][j] == '1') {
          queue<pair<int, int>>q;
          count++;
          grid[i][j] = '0';
          q.push({i, j});

          while(!q.empty()) {
            int x= q.front().first;
            int y= q.front().second;
            q.pop();

            for (int k = 0;k < 4; ++k) {
              int xx = x+dx[k];
              int yy = y+dy[k];

              if (isValid(xx, yy)) {
                if(grid[xx][yy] == '1') {
                  grid[xx][yy] = '0';
                  q.push({xx, yy});
                }
              }
            }
          }
        }
      }
    }
    return count;
  }
};
