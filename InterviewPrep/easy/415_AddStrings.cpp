/**
 *      file    :  415_AddStrings.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 08 21:10:09
 *      lastMod :  Sun Nov  8 21:10:09 2020
**/

class Solution {
public:
    string addStrings(string num1, string num2) {
      if (num1.size() == 0 && num2.size() == 0)
        return "";

      int s1 = num1.size();
      int s2 = num2.size();
      int i = s1-1;
      int j = s2-1;
      int carry = 0;
      string result;

      while (i > -1 || j > -1 || carry) {

        int n = (i>=0) ? num1[i--] - '0' : 0;
        int m = (j>=0) ? num2[j--] - '0' : 0;
        int s = carry + n + m;

        carry = s/10;
        result += '0' + (s % 10);
      }

      reverse(result.begin(), result.end());

      return result;
  }
};
