/**
 *      file    :  6_leetcode_fruits_into_baskets.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 19 15:30:01 
 *      lastMod :  Sun Mar 19 15:30:01 2023 
 **/

// Link: https://leetcode.com/problems/fruit-into-baskets/description/ 

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int,int>hm;
      int k = 2;
      int n = fruits.size();
      int res = INT_MIN;

      for (int i =0, j = 0;j < n;) {
        hm[fruits[j]]++;
        if (hm.size() > k) {
          while (hm.size() > k) {
            hm[fruits[i]]--;
            if (!hm[fruits[i]]) {
              hm.erase(fruits[i]);
            }
            i++;
          }
          j++;
        } else if (hm.size()<=k) {
          res = max(res, (j-i)+1);
          j++;
        }
      }
      return res;
    }
};
