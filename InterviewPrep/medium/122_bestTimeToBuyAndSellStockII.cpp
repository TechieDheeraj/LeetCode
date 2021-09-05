/**
 *      file    :  122_bestTimeToBuyAndSellStockII.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Sep 05 11:42:27 
 *      lastMod :  Sun  5 Sep 11:42:27 2021 
 **/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int cur_sum = 0;

      for (int i = 1;i < prices.size(); ++i) {
        cur_sum+=max(0,prices[i]-prices[i-1]);
      }
      return cur_sum;
    }
};
