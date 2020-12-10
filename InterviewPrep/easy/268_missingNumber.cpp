/**
 *      file    :  268_missingNumber.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 10 15:11:36
 *      lastMod :  Thu Dec 10 15:11:36 2020
 **/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();

      int sum = n * (n+1);
      sum/=2;
      int suv = 0;

      for (auto &i : nums)
        suv += i;

      return sum-suv;
    }
};
