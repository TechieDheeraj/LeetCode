/**
 *      file    :  598_rangeAdditionII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 07 00:55:54
 *      lastMod :  Mon Dec  7 00:55:54 2020
 **/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {

      for (auto &i: ops) {
        m = min(i[0], m);
        n = min(i[1], n);
      }
      return m*n;
    }
};
