/**
 *      file    :  1734_DecodeXORedPermutation.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jan 23 23:58:32 
 *      lastMod :  Sat Jan 23 23:58:32 2021 
 **/
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {

      vector<int>result;
      int first = 0;
      int n = encoded.size()+1;

      for (int i = 0; i <= n; ++i) {
        first^=i;
        if (i < n && (i % 2) == 1)
          first ^= encoded[i];
      }
      result.push_back(first);

      for(auto &i : encoded) {
        first = first ^ i;

        result.push_back(first);
      }
     return result;
    }
};
