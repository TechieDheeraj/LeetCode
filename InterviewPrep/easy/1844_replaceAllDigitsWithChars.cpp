/**
 *      file    :  1844_replaceAllDigitsWithChars.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 May 05 20:39:44 
 *      lastMod :  Wed May  5 20:39:44 2021 
 **/

class Solution {
public:
    string replaceDigits(string s) {
      if (s.length() == 1)
        return s;

      char f = s[0];
      for (int i =1; i < s.length(); ++i) {
        int n = s[i]-'0';
        if (n >= 0 && n <= 9)
          s[i] = s[i-1]+n;
      }
      return s;
    }
};
