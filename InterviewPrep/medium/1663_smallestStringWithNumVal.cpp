/**
 *      file    :  1663_smallestStringWithNumVal.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 25 02:36:46
 *      lastMod :  Wed Nov 25 02:36:46 2020
 **/

// this is greedy approach
class Solution {
public:
    string getSmallestString(int n, int k) {
      string s(n, 'a');
      k-=n;

      int i = n-1;
      while (k > 0) {
        int tmp = min(k, 25);
        s[i]+=tmp;
        --i;
        k-=tmp;
      }

      return s;
    }
};
