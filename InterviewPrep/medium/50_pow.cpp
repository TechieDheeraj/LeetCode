/**
 *      file    :  50_pow.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 22 01:03:55
 *      lastMod :  Sun Nov 22 01:03:55 2020
**/

class Solution {
  public:
    double myPow(double x, long long  n) {
      if (n == 0)
        return 1;

      double res = helper(x, abs(n));

      res = n > 0 ? res : 1/res;
      return res;

    }

    double helper(double x, long long n) {
      if (n == 0)
        return 1;
      cout << "before recursion " << x << " n " << n << endl;
      double res = myPow(x, n/2);
      cout << res << " n " << n << endl;

      if (n %2)
        res = res * res * x;
      else
        res = res * res;

      return res;
    }
};
