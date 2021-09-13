/**
 *      file    :  1768_mergeStringsAlternately.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 12 00:04:58 
 *      lastMod :  Sat 12 Jun 00:04:58 2021 
 **/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int i =0, j = 0;
      int m = word1.length();
      int n = word2.length();
      
      int l = min(n, m);
      string res = "";
      
      for (int i = 0; i< l; ++i) {
        res+=word1[i];
        res +=word2[i];
      }
      
      if (m == n)
        return res;
      
      if (l == m && n > l) {
        res+=word2.substr(l, n);
      } else if ( l == n && m > l) {
        res+=word1.substr(l, m);
      } 
      
      return res; 
      
    }
};
