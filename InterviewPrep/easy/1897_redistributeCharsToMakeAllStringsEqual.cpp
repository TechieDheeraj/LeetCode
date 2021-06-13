/**
 *      file    :  1897_redistributeCharsToMakeAllStringsEqual.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 13 17:03:16 
 *      lastMod :  Sun 13 Jun 17:03:16 2021 
 **/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
      int n = words.size();
      unordered_map<char, int>hm;
      for (auto &i : words) {
        for (auto& j: i) {
          hm[j]++;
        }
      }

      for (auto it = hm.begin(); it != hm.end(); ++it) {
        if (it->second % n != 0)
          return false;
      }
      return true;
    }
};
