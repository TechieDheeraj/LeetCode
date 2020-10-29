/**
 *      file    :  371_sumOfTwoIntegers.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 30 01:17:15
 *      lastMod :  Fri Oct 30 01:17:15 2020
**/

class Solution {
public:
    int getSum(int a, int b) {

      int c = 1;
      while (c != 0) {
        c = (a & b);
        a = a ^ b;
        b = (unsigned)(c) << 1;
      }

      return a;
    }
};
