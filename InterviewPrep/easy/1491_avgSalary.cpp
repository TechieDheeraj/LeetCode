/**
 *      file    :  1491_avgSalary.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 00:12:22
 *      lastMod :  Sun Oct 25 00:12:22 2020
**/

class Solution {
public:
    double average(vector<int>& salary) {

      long double sum = 0;
      int size = salary.size()-2;
      int min = *min_element(salary.begin(), salary.end());
      int maxe = *max_element(salary.begin(), salary.end());

      for (auto i : salary) {
        if (i == min || i == maxe)
          continue;
        sum += i;
      }
      return sum / size;
    }
};
