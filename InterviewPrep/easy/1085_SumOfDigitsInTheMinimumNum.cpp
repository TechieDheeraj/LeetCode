/**
 *      file    :  1085_SumOfDigitsInTheMinimumNum.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 06 23:44:44 
 *      lastMod :  Sat Feb  6 23:44:44 2021 
 **/

class Solution {
public:
    bool digitsSumEven(int a) {
      int sum = 0;
      while(a) {
        sum += a % 10;
        a/=10;
      }
      return sum % 2 ? false : true;
    }
    int sumOfDigits(vector<int>& A) {
      int min = *min_element(A.begin(), A.end());

      return digitsSumEven(min);
    }
};
