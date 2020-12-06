/**
 *      file    :  342_powerOfFour.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 21:01:05
 *      lastMod :  Sun Dec  6 21:01:05 2020
 **/

class Solution {
public:
    bool isPowerOfFour(int n) {

      return (n > 0 && (n & n-1) == 0 && (n-1) % 3 == 0) ? true: false;
    }
};
