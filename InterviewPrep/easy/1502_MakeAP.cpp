/**
 *      file    :  1502_MakeAP.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 24 21:32:16
 *      lastMod :  Sat Oct 24 21:32:16 2020
**/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

      sort(arr.begin(), arr.end());

      int i= 0;
      int j= 1;
      int diff = arr[j]-arr[i];
      ++i; ++j;

      while(i < j && j < arr.size()) {
        if (arr[j]-arr[i] != diff)
          return false;
        ++i; ++j;
      }
      return true;
    }
};
