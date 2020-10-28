/**
 *      file    :  693_binaryNoWithAlternatebits.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 29 00:23:29
 *      lastMod :  Thu Oct 29 00:23:29 2020
**/

class Solution {
public:
    bool hasAlternatingBits(int n) {

      int prev = 0;

      prev = (n & 1);
      n>>=1;
      while(n) {
        if ((n & 1) == prev)
          return false;
        prev = (n & 1);
        n>>=1;
      }

      return true;
    }
};
