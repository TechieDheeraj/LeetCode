/**
 *      file    :  56_mergeIntervals.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 31 00:27:07 
 *      lastMod :  Tue 31 Aug 00:27:07 2021 
 **/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>>res;
      sort(intervals.begin(), end(intervals));

      res.push_back(intervals[0]);
      for(int i = 1; i < intervals.size(); ++i) {
        if (res.back()[1] >= intervals[i][0]) {
          res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
        else
          res.push_back({intervals[i]});
      }
      return res;
    }
};
