/**
 *      file    :  1961_checkIfStringIsAprefixOfArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 08 17:39:58 
 *      lastMod :  Sun  8 Aug 17:39:58 2021 
 **/

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
      string st = words.front();

      if (st == s)
        return true;
      for (int i = 1;i < words.size(); ++i) {
        st+=words[i];
        if (st == s)
          return true;
      }
      return false;
    }
};
