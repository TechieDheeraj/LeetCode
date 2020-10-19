/**
 *      file    :  509_Fibonacci.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 20 00:26:46
 *      lastMod :  Tue Oct 20 00:26:46 2020
**/

class Solution {
public:
    int fib(int N) {

      int i = 0;
      vector<int> arr(N+1);

      if (N == 1)
        return 1;
      else if (N==0)
        return 0;

      arr[0] = 0;
      arr[1] = 1;

      for (i = 2; i < arr.size(); ++i) {
        arr[i] = arr[i-1] + arr[i-2];
      }

      return arr[N];

     /*
      if (N == 1)
        return 1;
      else if (N==0)
        return 0;

      return fib(N-1) + fib(N-2);
      */
    }
};
