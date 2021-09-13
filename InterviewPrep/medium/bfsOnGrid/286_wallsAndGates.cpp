/**
 *      file    :  286_wallsAndGates.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Sep 13 17:36:11 
 *      lastMod :  Mon 13 Sep 17:36:11 2021 
 **/

class Solution {
public:
    int m, n;

    inline bool isValid(int x, int y) {
      if (x < 0 || x >= m || y < 0 || y >= n) return false;
      return true;
    }

    void wallsAndGates(vector<vector<int>>& rooms) {
      int gate = 0;
      m = rooms.size();
      int dx[] = {-1, 0, 1, 0};
      int dy[] = {0, 1, 0, -1};

      if (m == 0) return;
      n = rooms[0].size();
      int x = 0;
      int y = 0;
      queue<pair<int, int>>q;
      for (int i = 0;i < m; ++i) {
        for (int j = 0;j < n; ++j) {
          if (rooms[i][j] == gate) {
            q.push({i, j});
          }
        }
      }

      while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int k = 0;k < 4; ++k) {
          int xx = x+dx[k];
          int yy = y+dy[k];
          if (isValid(xx, yy)) {
            if (rooms[xx][yy] == INT_MAX) {
              rooms[xx][yy] = rooms[x][y]+1;
              q.push({xx, yy});
            }
          }
        }
      }
    }
};
