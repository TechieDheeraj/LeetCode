/**
 *      file    :  167_twoSumII.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 01 15:04:48 
 *      lastMod :  Mon Feb  1 15:04:48 2021 
 **/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int l = 0; int r = numbers.size()-1;

      while(l < r) {
        int sum = numbers[l]+numbers[r];

        if (sum == target)
          return {l+1, r+1};
        if (sum < target)
          l++;
        else
          r--;
      }
      return {};
    }
};
