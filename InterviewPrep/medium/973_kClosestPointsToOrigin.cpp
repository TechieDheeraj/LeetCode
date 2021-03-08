/**
 *      file    :  973_kClosestPointsToOrigin.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Mar 09 01:01:08 
 *      lastMod :  Tue Mar  9 01:01:08 2021 
 **/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

      vector<vector<int>> result;

      priority_queue<vector<int>, vector<vector<int>>, compare>pq;

      for (auto &i: points) {
        pq.push(i);

        if (pq.size() > k)
          pq.pop();
      }

      while(!pq.empty()) {
        result.push_back(pq.top());
        pq.pop();
      }

      return result;
    }
  struct compare {
    bool operator()(vector<int>&p, vector<int>&q) {
        return (p[0]*p[0] + p[1]*p[1] < q[0]*q[0]+q[1]*q[1]);
    }
  };
};
