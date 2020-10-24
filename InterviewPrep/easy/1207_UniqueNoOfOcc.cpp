/**
 *      file    :  1207_UniqueNoOfOcc.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 24 21:18:44
 *      lastMod :  Sat Oct 24 21:18:44 2020
**/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int, int> hashMap;
      unordered_set<int> hashSet;

      for (auto i : arr)
        hashMap[i]++;

      for (auto i: hashMap) {
        if(hashSet.find(i.second) != hashSet.end())
          return false;
        else
          hashSet.insert(i.second);
      }
      return true;
    }
};
