/**
 *      file    :  1636_sortArrByIncreasingFreq.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 00:29:35
 *      lastMod :  Sun Nov  1 00:29:35 2020
**/

class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {

      unordered_map<int, int> hashMap;
      unordered_set<int>hashSet;
      vector<int>result;

      for (auto i : nums) {
        hashMap[i]++;
      }

     int maxi = 100;
     int min = 1;
     const bool CLEAR = true;

      while (min <= maxi) {
        while (CLEAR) {
          int maxe = INT_MIN;
            for (auto k : hashMap) {
              if (k.second != min || hashSet.find(k.first) != hashSet.end())
                continue;
              maxe = max(maxe, k.first);
             }
          if (maxe == INT_MIN)
            break;

            if (hashSet.find(maxe) == hashSet.end()) {
                hashSet.insert(maxe);
                int count = min;
                while(count--)
                result.push_back(maxe);
            }
          }
        min++;
      }
      return result;
    }
};
