/**
 *      file    :  70_climbingStairs.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 20 01:36:35
 *      lastMod :  Fri Nov 20 01:36:35 2020
**/

#include <bits/stdc++.h>

using namespace std;

#define VI vector<int>
class Solution {
public:

  int climb_stairs(int i, int &n, VI& res) {

      if (i >n)
        return 0;
      if (i == n)
        return 1;
      if (res[i]>0)
        return res[i];

      res[i] = climb_stairs(i+1, n, res) + climb_stairs(i+2, n, res);
      return res[i];
    }

    int climbStairs(int n) {

      VI res(n+1,0);
      return climb_stairs(0, n, res);
    }

 /*
    int climb_stairs(int i, int& n) {
      if (i > n)
        return 0;
      if (i == n)
        return 1;

      return climb_stairs(i+1, n) + climb_stairs(i+2, n);

    }

    int climbStairs(int n) {

      VI res(n+1);
      return climb_stairs(0, n);
    }
    */

};
