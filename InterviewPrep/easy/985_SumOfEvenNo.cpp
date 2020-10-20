/**
 *      file    :  985_SumOfEvenNo.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 21 01:01:53 AM
 *      lastMod :  Wed 21 Oct 2020 01:01:53 AM IST
**/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
      
      int size = A.size();
      int origSum = 0;
      vector< int> result;
      
      for (auto i: A) {
        if ((i&1) == 0)
          origSum+=i;
      }        
      
      for (int i = 0; i<size; ++i) {
        int idx = queries[i][1];
        int val = queries[i][0];
        int prev = A[idx]; 
        
        A[idx] += val; 
        
        if ((A[idx] & 1) == 0) { // even
          if ((prev & 1) == 0)
            origSum += val; 
          else
            origSum += A[idx];
        }
        else { // odd 
          if ((prev & 1) == 0)
            origSum -= prev; 
        }
        result.push_back(origSum);
      }
      return result;
    }
};
