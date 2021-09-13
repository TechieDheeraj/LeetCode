/**
 *      file    :  1894_findtheStudentThatWillReplaceChalk.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 12 23:50:05 
 *      lastMod :  Sat 12 Jun 23:50:05 2021 
 **/

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("inline")
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
      int n = chalk.size();
      long long sum = 0;

      for (auto& i: chalk)
        sum+=i;

      k%=sum;

      while(k >0) {
        for (int i = 0; i< n; ++i) {
          if (k < chalk[i])
            return i;
          k-=chalk[i];
        }
      }
      return 0;
    }
};
