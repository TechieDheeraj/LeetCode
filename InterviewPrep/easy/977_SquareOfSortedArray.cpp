/**
 *      file    :  977_SquareOfSortedArray.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 19 02:36:08 AM
 *      lastMod :  Mon 19 Oct 2020 02:36:08 AM IST
**/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
      
      int size = A.size();
      
      /*
      vector<int>result;
      
      priority_queue<int, vector<int>, greater<int>> pq;
      
      for (int i = 0; i < size; ++i)
        pq.push(A[i]*A[i]);
      
      while(!pq.empty()) {
        result.push_back(pq.top());
        pq.pop();
      }
      
      return result;
      */
      
      
      for (int i = 0; i < size; ++i) {
        A[i] *= A[i]; 
      }
      sort(A.begin(), A.end());
      
      return A;
    }
};
