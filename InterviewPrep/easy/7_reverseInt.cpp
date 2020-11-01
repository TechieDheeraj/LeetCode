/**
 *      file    :  7_reverseInt.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 21:11:47
 *      lastMod :  Sun Nov  1 21:11:47 2020
**/

class Solution {
public:
    int reverse(int x) {
      string s = to_string(x);

      int j = s.size()-1;
      int i = 0;

      if (x >= 0 && x < 10)
        return x;

      if (s[i] == '-')
        ++i;

      while (i <= j) {
        if (i == j)
          break;
        s[i]^=s[j];
        s[j]^=s[i];
        s[i]^=s[j];

        ++i; --j;
      }

      long int t = stol(s);
      if (t > INT_MAX || t < INT_MIN)
        return 0;

      return (int)t;
    }
};
