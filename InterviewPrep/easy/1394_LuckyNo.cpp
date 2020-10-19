/**
 *      file    :  1394_LuckyNo.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 20 01:01:25
 *      lastMod :  Tue Oct 20 01:01:25 2020
**/

class Solution {
public:
    int findLucky(vector<int>& arr) {

      unordered_map<int,int>hashMap;
      int luckyNo = -1;

      for (auto i : arr)
        hashMap[i]++;

      for (int i = 0; i < arr.size(); ++i) {
        if (hashMap[arr[i]] == arr[i]) {
          luckyNo = max(luckyNo, arr[i]);
        }
      }
      return luckyNo;
    }
};
