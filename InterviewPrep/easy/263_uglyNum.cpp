/**
 *      file    :  263_uglyNum.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 07 18:30:21
 *      lastMod :  Sat Nov  7 18:30:21 2020
**/

class Solution {
public:
    bool isUgly(int num) {

      if (num <= 0) return false;
      while (num % 3 == 0) num/=3;
      while (num % 5 == 0) num/=5;

      return (num & (num-1)) == 0;
    }
};
