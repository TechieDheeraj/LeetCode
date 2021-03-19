/**
 *      file    :  1167_minCosttoConnectSticks.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Mar 20 01:13:24 
 *      lastMod :  Sat Mar 20 01:13:24 2021 
 **/

class Solution {
public:
    int connectSticks(vector<int>& sticks) {
      if (sticks.size() == 1)
        return 0;

      int result = 0;
      priority_queue<int, vector<int>, greater<int>>pq; // creating min heap

      for (auto &i: sticks) {
        pq.push(i);
      }

      while(!pq.empty()) {
      //while(pq.size() > 1) { // exit when only one element is available in the pq
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();

        int cost = first+second;
        result += cost;
        if (pq.empty()) // Don't push into pq when only one element is left
          break;
        pq.push(cost);
      }
      return result;
    }
};
