/**
 *      file    :  1295_evenNoDigit.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 17 00:34:20
 *      lastMod :  Sat Oct 17 00:34:20 2020
**/

class Solution {
public:

    int digits(int& n) {
      int count = 0;
      int rem = 0;

      while(n) {
        rem = n % 10;
        n /= 10;
        count++;
      }

      return count;
    }

    int findNumbers(vector<int>& nums) {
      int numc = 0;
      int count = 0;

      for (auto i : nums) {
        numc = digits(i);
        if ( numc && (numc % 2) == 0)
          count++;
      }

      return count;
    }
};
