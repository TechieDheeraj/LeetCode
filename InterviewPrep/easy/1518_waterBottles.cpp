/**
 *      file    :  1518_waterBottles.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 25 02:37:43
 *      lastMod :  Wed Nov 25 02:37:43 2020
 **/

class Solution {
public:
    int numWaterBottles(int b, int ne) {

      int d = b;
      int nb = b;
      int emp =0;

      while (nb >= 1) {
        emp += nb % ne;

        nb /= ne;
        if (emp >= ne) {
          nb += emp/ne;
          emp %= ne;
        }
        d+=nb;
      }

      return d;
    }
};
