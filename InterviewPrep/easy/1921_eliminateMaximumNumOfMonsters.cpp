/**
 *      file    :  1921_eliminateMaximumNumOfMonsters.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jul 04 12:24:51 
 *      lastMod :  Sun  4 Jul 12:24:51 2021 
 **/

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {

      vector<int>time(dist.size());

      for (int i = 0;i < dist.size(); ++i) {
        time[i] = ceil((double)dist[i]/speed[i]); // time taken for monster to reach the town
      }

      sort(time.begin(), time.end());
      int c = 0;

      for (int i = 0; i < time.size(); ++i) {
        if (time[i] > i) c++;
        else
          break;
      }
      return c;
    }
};
