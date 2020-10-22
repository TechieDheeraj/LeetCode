/**
 *      file    :  461_hammingDist.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 22 23:41:22
 *      lastMod :  Thu Oct 22 23:41:22 2020
**/

class Solution {
public:
    int hammingDistance(int x, int y) {

      int count = 0;
      while (x > 0 || y > 0) {
        if ((x & 1) != (y & 1))
          count++;
        x >>= 1;
        y >>=1;
      }
      return count;
    }
};
