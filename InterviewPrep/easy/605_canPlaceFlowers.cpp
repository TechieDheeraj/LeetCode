/**
 *      file    :  605_canPlaceFlowers.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 00:15:38
 *      lastMod :  Sun Dec  6 00:15:38 2020
 **/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int sz = flowerbed.size();
      int c = 0;
      if (n == 0)
        return true;
      
      for (int i =0 ; i < flowerbed.size() && c < n; ++i) {
        if (flowerbed[i] == 0) {
          int prev = i == 0 ? 0: flowerbed[i-1];
          int nxt = (i == sz-1) ? 0: flowerbed[i+1];
          if (prev == 0 && nxt == 0) {
            ++c;
            flowerbed[i] = 1;
          }
        }
      }
       return c == n; 
    }
};
