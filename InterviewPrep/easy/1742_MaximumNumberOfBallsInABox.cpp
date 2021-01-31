/**
 *      file    :  1742_MaximumNumberOfBallsInABox.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jan 31 17:19:15 
 *      lastMod :  Sun Jan 31 17:19:15 2021 
 **/

#define MAX 1e5+1
class Solution {
public:
    inline int sumdigits(int num) {
      int sum = 0;
      while(num) {
        sum+=num%10;
        num/=10;
      }
      return sum;
    }
    int countBalls(int& lowLimit, int& highLimit) {

      vector<int>balls(MAX, 0);

      for (int i = lowLimit; i <= highLimit; ++i) {
        if (i >= 10)
          balls[sumdigits(i)]+=1;
        else
          balls[i] += 1;
      }

      int t = INT_MIN;
      for (auto &k: balls)
        t = max(k, t);

      return t;
    }
};
