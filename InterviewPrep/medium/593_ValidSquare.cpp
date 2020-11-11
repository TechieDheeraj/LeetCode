/**
 *      file    :  593_ValidSquare.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 12 03:34:52
 *      lastMod :  Thu Nov 12 03:34:52 2020
**/

class Solution {
public:
    int d(vector<int>& p1, vector<int>& p2) {
      int x = (p2[0] - p1[0]);
      int y = (p2[1] - p1[1]);
      return x * x + y * y;
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
      unordered_set<int>s({d(p1,p2), d(p1,p3),d(p1,p4),d(p2,p3),d(p2,p4),d(p3,p4)});
      return !s.count(0) && s.size() == 2;
    }
};
