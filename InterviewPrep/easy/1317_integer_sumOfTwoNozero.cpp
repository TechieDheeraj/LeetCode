/**
 *      file    :  1317_integer_sumOfTwoNozero.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 03 01:22:20
 *      lastMod :  Tue Nov  3 01:22:20 2020
**/

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
      int a = 0;
      int b = n;
      string s1;
      string s2;

      while (true) {
        a++;
        b--;
        s1=to_string(a);
        s2=to_string(b);

        if (string::npos != s1.find('0') || string::npos != s2.find('0'))
           continue;

          return {stoi(s1), stoi(s2)};
        }
      }
};
