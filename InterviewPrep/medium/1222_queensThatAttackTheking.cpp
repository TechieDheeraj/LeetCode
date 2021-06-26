/**
 *      file    :  queensThatAttackTheking.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 25 23:59:27 
 *      lastMod :  Fri 25 Jun 23:59:27 2021 
 **/

// First Solution

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& k) {
      vector<vector<int>>res;

      vector<vector<bool>>qe(8, vector<bool>(8, false));

      for (auto &q: queens)
        qe[q[0]][q[1]] = true;

      // down direction
      for(int i = k[0]; i < 8; ++i) {
        if (qe[i][k[1]]) {
          res.push_back({i, k[1]});
          break;
        }
      }
     // up direction
      for(int i = k[0]; i >=0; --i) {
        if (qe[i][k[1]]) {
          res.push_back({i, k[1]});
          break;
        }
      }

     // right direction
      for(int i = k[1]; i < 8; ++i) {
        if (qe[k[0]][i]) {
          res.push_back({k[0], i});
          break;
        }
      }
      // left direction
      for(int i = k[1]; i >= 0; --i) {
        if (qe[k[0]][i]) {
          res.push_back({k[0], i});
          break;
        }
      }

      // diagonal left up
      int i = k[0];
      int j = k[1];
      for(; i >= 0 && j >= 0; --i, --j) {
        if (qe[i][j]) {
          res.push_back({i, j});
          break;
        }
      }
       // diagonal left down
      i = k[0];
      j = k[1];
      for(; i < 8 && j >= 0; ++i, --j) {
        if (qe[i][j]) {
          res.push_back({i, j});
          break;
        }
      }
       // diagonal right up
      i = k[0];
      j = k[1];
      for(; i >= 0 && j < 8; --i, ++j) {
        if (qe[i][j]) {
          res.push_back({i, j});
          break;
        }
      }
       // diagonal right down
      i = k[0];
      j = k[1];
      for(; i < 8 && j < 8; ++i, ++j) {
        if (qe[i][j]) {
          res.push_back({i, j});
          break;
        }
      }

      return res;
    }
};

// Second solution

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& k) {

      // [-1, 0], [1, 1], [0, -1], [-1, -1], [1, 0], [0, 1], [1, -1], [-1, 1]

      vector<vector<int>>res;
      vector<vector<bool>>que(8, vector<bool>(8, false));

      for (auto &qe: queens)
        que[qe[0]][qe[1]] = true;

      for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
          if (i == 0 && j == 0)
            continue;

          int x = k[0]+i;
          int y = k[1]+j;

          while(min(x, y) >= 0 && max(x, y) < 8) {

            if (que[x][y]) {
              res.push_back({x, y});
              break;
            }

            x+=i;
            y+=j;
          }
        }
      }
      return res;
    }
};


