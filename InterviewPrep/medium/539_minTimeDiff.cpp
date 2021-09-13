/**
 *      file    :  539_minTimeDiff.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 20 17:08:26 
 *      lastMod :  Sun 20 Jun 17:08:26 2021 
 **/

class Solution {
public:
    int findMinDifference(vector<string>& t) {
      int res = 24*60;
      vector<int>tm(t.size());
      for (int i=0;i < t.size(); ++i)
        tm[i] = stoi(t[i].substr(0,2))*60+stoi(t[i].substr(3));

      sort(tm.begin(), tm.end());
      tm.push_back(tm[0]+res);

      for (int i =1; i <tm.size(); ++i) {
        res = min(res, tm[i]-tm[i-1]);
      }
      return res;
    }
};
