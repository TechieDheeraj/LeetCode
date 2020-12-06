/**
 *      file    :  1680_concatenationOfConsecutiveBinaryNums.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 19:23:06
 *      lastMod :  Sun Dec  6 19:23:06 2020
 **/

/*

let's take an example
n = 3

Intially ans = 1;

for i --> 2
number of bits in 2 is 2;
shift answer by number of bits i.e. 2 ans add i
ans = 1 << 2 + 2
= 6

for i --> 3
number of bits in 3 is 2;
shift answer by number of bits i.e. 2 ans add i
ans = 6 << 2 + 3
= 27

so, answer is 27.

*/

class Solution {
public:
    int concatenatedBinary(int n) {
      int mod = 1e9+7;
      
      long long ans = 1;
      
      for (int i = 2; i <=n; ++i) {
        int bits = (int) log2(i)+1;
        ans = ((ans << bits)% mod + i)%mod;
      }
      return ans;
    }
};
