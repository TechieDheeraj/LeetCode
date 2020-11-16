/**
 *      file    :  118_pascalTriangle.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 17 02:30:05
 *      lastMod :  Tue Nov 17 02:30:05 2020
**/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

      if (numRows == 0)
        return {};
      if (numRows == 1)
        return {{1}};

      auto last = generate(numRows-1); // Recursion

      vector<int>res;
      for (int i = 0; i < numRows; ++i) {
        if ( i == 0 or i == numRows-1) res.push_back(1);
        else
          res.push_back(last[last.size()-1][i-1] + last[last.size()-1][i]);
      }
      last.push_back(res);
      return last;
    }
};
