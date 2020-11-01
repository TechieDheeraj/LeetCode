/**
 *      file    :  5554_arrayFormation.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 10:17:58
 *      lastMod :  Sun Nov  1 10:17:58 2020
**/

// https://leetcode.com/contest/weekly-contest-213/problems/check-array-formation-through-concatenation/

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
      map<int,int>hashMap;
      for (int i = 0; i < arr.size();  ++i)
        hashMap[arr[i]] = i;

      for (auto &i:pieces) {
        for (auto &j : i) {
          if (!hashMap.count(j)) return false;
          j = hashMap[j]; // replacing with indeces;
        }
      }

      sort(pieces.begin(), pieces.end());
      int cur = 0;

      for (auto &i : pieces) {
        for (auto &j : i) {
          if (j != cur) return false;
          cur++;
        }
      }
      return true;
    }
};
