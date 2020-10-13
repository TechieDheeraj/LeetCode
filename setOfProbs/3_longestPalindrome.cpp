/**
 *      file    :  3_longestPalindrome.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:20:35
 *      lastMod :  Wed Oct 14 01:20:35 2020
**/

/*   TLE Error is coming on Leetcode... */
class Solution {
public:
    string longestPalindrome(string s) {

      int n = s.size();
      string result;

      int maxlength = 1, start = 0;

      for (int i = 0; i < s.length(); ++i) {
        for (int j = i; j < s.length(); ++j) {
          int flag = 1;

          for (int k = 0; k < (j-i+1)/2; ++k) {
            if (s[i+k] != s[j-k])
              flag = 0;
          }

          if (flag && (j - i + 1) > maxlength) {
            start = i;
            maxlength = j - i + 1;
          }
        }
      }

      for ( int i = start; i < start+maxlength; ++i)
        result+=s[i];

      return result;
    }
};
