/**
 *      file    :  238_productOfArrayExceptSelf.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 03 01:06:41 
 *      lastMod :  Wed Feb  3 01:06:41 2021 
 **/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();

      vector<int> result(n);

      result[0] = 1;
      for (int i = 1; i < n; ++i) {
        result[i] = result[i-1] * nums[i-1];
      }
      int right = 1;

      for (int i = n-1; i >= 0; --i) {
        result[i] *= right;
        right *= nums[i];
      }

      return result;

      /*
      vector<pair<int, int>> products(n, make_pair(1, 1));
      vector<int>result(n);

      // for left to right
      for (int i = 1; i < n; ++i)
        products[i].first = products[i-1].first * nums[i-1];

      for (int i = n-2; i >= 0; --i)
        products[i].second = products[i+1].second * nums[i+1];

      for (int i = 0; i < n; ++i)
        result[i] = products[i].first * products[i].second;

      return result;
      */
    }
};
