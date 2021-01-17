/**
 *      file    :  1725_NumOfRectanglesThatFormLargestSquare.cpp
 *      author  :  techiedheeraj
 *      created :  2021 Jan 17 12:53:35
 *      lastMod :  Sun Jan 17 12:53:35 2021
 **/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
      int res = INT_MIN;
      unordered_map<int, int>hm;
      for (auto&i : rectangles) {
        sort(i.begin(), i.end(), [](int a, int b) {
          return a < b ? true : false;
        });
        res = max(res, i[0]);
        hm[i[0]]++;
      }
      
      return hm[res];
    }
};
