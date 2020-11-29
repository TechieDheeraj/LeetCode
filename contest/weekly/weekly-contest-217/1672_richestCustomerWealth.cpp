/**
 *      file    :  1672_richestCustomerWealth.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 29 18:40:42
 *      lastMod :  Sun Nov 29 18:40:42 2020
 **/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

      int m = INT_MIN;

      for (auto &i: accounts) {
        int localm = INT_MIN;
        int sum = 0;
        for (auto&j : i) {
          sum+=j;
          localm = max(localm, sum);
        }
        m = max(localm, m);
      }
      return m;
    }
};
