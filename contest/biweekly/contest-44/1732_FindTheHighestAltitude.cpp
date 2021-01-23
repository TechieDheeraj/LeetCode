/**
 *      file    :  1732_FindTheHighestAltitude.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jan 23 23:59:27 
 *      lastMod :  Sat Jan 23 23:59:27 2021 
 **/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int s = 0;
      int res = 0;

      for (auto &i: gain) {
        s+=i;
        res=max(res, s);
      }

      return res;

    }
};
