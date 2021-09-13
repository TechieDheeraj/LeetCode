/**
 *      file    :  1952_threeDivisors.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 01 16:39:22 
 *      lastMod :  Sun  1 Aug 16:39:22 2021 
 **/

class Solution {
public:
    bool isThree(int n) {
      int c = 0;
      if (n < 3)
        return false;
      for (int i= 2; i<n; ++i) {
        if (!(n % i))
          c++;
      }
      if (c == 1)
        return true;
      else
        return false;
    }
};
