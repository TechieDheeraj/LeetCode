/**
 *      file    :  387_FirstUniqueCharInAStr.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 14 23:58:19
 *      lastMod :  Mon Dec 14 23:58:19 2020
 **/

class Solution {
public:
    int firstUniqChar(string& s) {
      unordered_map<char,int> hm;
      //int n = s.size();
      for (int i = 0; i< s.length(); ++i) {
        hm[s[i]]++;
      }

      for (int i = 0; i< s.length(); ++i) {
        if (hm[s[i]] == 1) return i;
      }
      return -1;

      /*
      vector<int>a(26, 0);

      for (int i = 0; i< s.size(); ++i) {
        a[s[i]-'a']+=1;
      }

      for(int i = 0; i< s.size(); ++i) {
        if(a[s[i]-'a'] == 1) return i;
      }
      return -1;
      */
    }
};
