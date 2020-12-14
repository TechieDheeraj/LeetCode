/**
 *      file    :  1624_LargestSubstrBwTwoEqualChars.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 14 23:57:00
 *      lastMod :  Mon Dec 14 23:57:00 2020
 **/

class Solution {
public:
    int maxLengthBetweenEqualCharacters(const string& s) {
      unordered_map<char, pair<int,int>>hm;

      for (int i =0; i< s.size(); ++i){
        if (hm.find(s[i]) != hm.end()) {
          hm[s[i]].second = i;
          continue;
        }
        hm[s[i]] = make_pair(i, -1);
      }

      int res = -1;
      for (auto&i:s) {
        if (hm[i].second == -1) continue;
        res = max(res, hm[i].second-hm[i].first-1);
      }

      return res;
    }
};
