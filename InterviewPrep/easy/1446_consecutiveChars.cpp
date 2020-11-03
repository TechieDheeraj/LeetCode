/**
 *      file    :  1446_consecutiveChars.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 03 16:45:39
 *      lastMod :  Tue Nov  3 16:45:39 2020
**/

class Solution {
public:
    int maxPower(string s) {
      int result = 1;
      int i = 0;
      int j = i+1;
      int count = 1;

      if (s == "")
        return 0;

      for (i = 0; i <= s.size()-1; ++i) {
        if (s[i]==s[j])
          count++;
        else {
          result = max(result, count);
          count = 1;
        }
        ++j;
      }
      return result;
    }
};
