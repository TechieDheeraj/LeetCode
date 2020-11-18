/**
 *      file    :  119_PascalTriangeII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 19 01:41:06
 *      lastMod :  Thu Nov 19 01:41:06 2020
**/

class Solution {
public:
    vector<int> getRow(int rowIndex) {

      if (rowIndex == 0)
        return {1};

      auto last = getRow(rowIndex-1);
      vector<int>res(rowIndex+1);

      fill(res.begin(),res.end(), 1);

      for (int i = 1; i < res.size()-1;++i) {
        res[i] = last[i-1] + last[i];
      }
      return res;
    }
};
