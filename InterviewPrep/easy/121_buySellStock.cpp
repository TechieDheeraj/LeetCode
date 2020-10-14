/**
 *      file    :  121_buySellStock.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 11:42:39 PM
 *      lastMod :  Wed 14 Oct 2020 11:42:39 PM IST
**/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
  
      int minPrice = INT_MAX;
      int maxPro = 0; 
      int size = prices.size();
      
      for (int i = 0; i< size; ++i) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i]-minPrice);
        
      }
      return maxPro;

/*
      int size = prices.size();
      int local_max = 0;
      int global_max = 0;
      
      for (int i = 0; i< size; ++i) {
        local_max = INT_MIN;
        
        for (int j = i+1; j < size; ++j) {
          if (prices[j] < prices[i])
            break;
          
          local_max = max(local_max, prices[j]-prices[i]);
        }
        global_max = max(global_max, local_max);
      }
      
      return global_max;
*/
  }
};
