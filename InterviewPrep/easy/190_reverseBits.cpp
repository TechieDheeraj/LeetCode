/**
 *      file    :  190_reverseBits.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 29 00:06:40
 *      lastMod :  Thu Oct 29 00:06:40 2020
**/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

      uint32_t result= 0;
      uint32_t i = 0;

      while (i != 31) {
        result |= n & 1;// (1 << i);
        result <<= 1;
        n >>=1;
        ++i;
      }
      result |= n & 1;
      return result;
    }
};
