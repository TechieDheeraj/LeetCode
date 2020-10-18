/**
 *      file    :  832_FlippingImage.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 19 01:38:04 AM
 *      lastMod :  Mon 19 Oct 2020 01:38:04 AM IST
**/

class Solution {
public:
  
    void flipAndInvert(vector<int>& v) {
      int i = 0;
      int j = v.size()-1;
      
      
      while((j-i) >= 1) {
        v[i] -= 1; v[i] = abs(v[i]);
        v[j] -= 1; v[j] = abs(v[j]);
        
        v[i]^=v[j];
        v[j]^=v[i];
        v[i]^=v[j];
        
        ++i; 
        --j; 
      }
      if(i ==j)
        v[i] -= 1; v[i] = abs(v[i]);
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
      
      int size = A.size();
      for (int i = 0 ; i < size; ++i) {
        flipAndInvert(A[i]);
      }
      
      return A;
    }
};
