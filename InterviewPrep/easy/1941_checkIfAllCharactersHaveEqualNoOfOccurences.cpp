/**
 *      file    :  1941_checkIfAllCharactersHaveEqualNoOfOccurences.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 30 00:20:08 
 *      lastMod :  Mon 30 Aug 00:20:08 2021 
 **/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
      unordered_map<char, int>hm;
      /*
      char freq[26] = {0};

      for(auto &i: s) {
        freq[i-'a']+=1;
      }
      */

      for(auto &i: s) {
        hm[i]++;
      }

     // int c = freq[s[0]-'a'];
      int c = hm[s[0]];
      for(auto&i: s) {
        /*
        if (freq[i-'a'] != c)
          return false;
          */
        if (hm[i] != c)
          return false;
      }
      return true;
    }
};
