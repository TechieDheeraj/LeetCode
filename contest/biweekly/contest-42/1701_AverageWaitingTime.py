#! /usr/bin/env python3

###
 #      file    :  1701_AverageWaitingTime.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 29 23:54:32
 #      lastMod :  Tue Dec 29 23:54:32 2020
###

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {

      int v = c[0][0];
      int s = c.size();
      double res = 0;
      for (auto i: c) {
        int a = i[0];
        int o = i[1];

        if (v >= a) {
          v+=o;
          res += (v-a);
        }
        else {
          res += o;
          v = a;
          v+=o;
        }
      }
      return res/s;
    }
};
