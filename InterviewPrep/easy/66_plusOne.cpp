/**
 *      file    :  66_plusOne.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 03 02:05:22
 *      lastMod :  Tue Nov  3 02:05:22 2020
**/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int size = digits.size()-1;
      int carr = 1;
      vector<int>result;

      for (int i = size; i >= 0; --i) {
        int sum = digits[i]+carr;
        digits[i] = sum %10;
        carr = sum/10;
        result.insert(result.begin(), digits[i]);
        if (carr == 1 && i == 0)
          result.insert(result.begin(), carr);
      }
      return result;
    }
};
