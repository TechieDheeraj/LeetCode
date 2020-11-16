/**
 *      file    :  344_reverseString.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 17 00:18:07
 *      lastMod :  Tue Nov 17 00:18:07 2020
**/

class Solution {
public:
    void reverseString(vector<char>& s) {
      int l = 0;
      int r = s.size()-1;

      while (l < r) {
        s[l] ^= s[r];
        s[r] ^= s[l];
        s[l] ^= s[r];

        l++; --r;
      }

    }
  /*
    void helper(vector<char> &s, int l, int r) {
      if(l >= r)
        return;

      s[l] ^= s[r];
      s[r] ^= s[l];
      s[l] ^= s[r];

      helper(s, l+1, r-1);
    }
    void reverseString(vector<char>& s) {
      if (s.size() <=1)
        return;

      helper(s, 0, s.size()-1);

    }
    */
};
