/**
 *      file    :  1380_LuckyNo.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 24 00:46:58
 *      lastMod :  Sat Oct 24 00:46:58 2020
**/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

      int minElement = INT_MAX;
      int maxElement = INT_MIN;

      vector<int> result;

        for (int j = 0; j < matrix.size(); ++j) {
          minElement = *min_element(matrix[j].begin(), matrix[j].end());
          auto it = find(matrix[j].begin(),matrix[j].end(),minElement);
          int idx = std::distance(matrix[j].begin(), it);
          maxElement = INT_MIN;
          for (int k = 0; k < matrix.size(); ++k)
            maxElement = max(maxElement, matrix[k][idx]);

          if (maxElement == minElement)
            result.push_back(maxElement);
        }
      return result;
    }
};
