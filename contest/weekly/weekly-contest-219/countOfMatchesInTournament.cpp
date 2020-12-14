/**
 *      file    :  countOfMatchesInTournament.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 14 23:54:32
 *      lastMod :  Mon Dec 14 23:54:32 2020
 **/

class Solution {
public:
    int numberOfMatches(int n) {
      int count = 0;
      int m = 0;
      int a = 0;
      while (n >1) {
        if (n &1) {
          m = (n-1)/2;
          n = m+1;
        }
        else {
          m = n/2;
          n = m;
        }
        count+=m;
      }
      return count;
    }
};
