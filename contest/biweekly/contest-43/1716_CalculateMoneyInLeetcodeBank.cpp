/**
 *      file    :  1716_CalculateMoneyInLeetcodeBank.cpp
 *      author  :  techiedheeraj
 *      created :  2021 Jan 10 15:47:54
 *      lastMod :  Sun Jan 10 15:47:54 2021
 **/

class Solution {
public:
    int totalMoney(int n) {

      int mon = 1;
      int c = mon;
      int res = 0;
      int count = 1;
      int t = 1;
      bool it = false;
      while (count <= n) {
        if (it) {
          c=++mon;
          it = false;
          t = 1;
        }
        res+=c;
        c++;
        count++;
        t++;
        if (t == 8)
          it = true;
      }

      return res;
    }
};
