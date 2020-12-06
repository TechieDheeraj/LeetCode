/**
 *      file    :  326_powerOfThree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 21:34:39
 *      lastMod :  Sun Dec  6 21:34:39 2020
 **/

class Solution {
public:
    bool isPowerOfThree(int n) {

      /*
      if (n < 1) return false;

      while (n % 3 == 0) {
        n/=3;
      }
      return n == 1;
      */

      // As number range is max int then found maximum power of 3 number by hit and trial
      // 2^32/2 -1 ( maximum positive integer)
      // 3 ^ 19 < 2^32/2 -1 < 3^20

      return (n > 0) && ((1162261467 % n) == 0) ? true: false;

    }
};
