/**
 *      file    :  1217_minCostToMoveChips.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 05 23:19:34
 *      lastMod :  Thu Nov  5 23:19:34 2020
**/

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {

      vector<int>cnt(2);

      for (auto &i : position) ++cnt[i % 2];
      return min(cnt[0], cnt[1]);
    }
};
