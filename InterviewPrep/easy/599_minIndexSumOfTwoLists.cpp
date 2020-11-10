/**
 *      file    :  599_minIndexSumOfTwoLists.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 10 23:09:58
 *      lastMod :  Tue Nov 10 23:09:58 2020
**/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

      unordered_map<string,int>hashMap;
      vector<string>result;
      int min = INT_MAX;

      for (int i= 0; i < list1.size(); ++i)
        hashMap[list1[i]] = i;

      for (int i = 0; i< list2.size(); ++i) {
        auto it = hashMap.find(list2[i]);
        if(it != hashMap.end()) {
          if (min > it->second+i) {
            result.clear();
            min = it->second+i;
            result.push_back(list2[i]);
          }
          else if (min == it->second+i) {
            result.push_back(list2[i]);
          }
          else
            continue;
        }
      }

      return result;
    }
};
