/**
 *      file    :  204_countPrimes.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 07 18:06:49
 *      lastMod :  Sat Nov  7 18:06:49 2020
**/

class Solution {
public:
    bool isPrime(int n) {

      if (n <= 3)
        return true;

      if (n % 2 == 0 || n % 3 == 0)
        return false;

      for (int i = 5; i * i <= n; i=i+6) {
        if (n % i == 0 || n % (i+2) == 0)
          return false;
      }
      return true;
    }
    int countPrimes(int n) {
      int count = 0;

      if (n <= 1)
        return 0;

      for (int i = 2; i < n; ++i)
        if (isPrime(i)) ++count;

      return count;
    }
};
