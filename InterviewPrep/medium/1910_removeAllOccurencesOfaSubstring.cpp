/**
 *      file    :  1910_removeAllOccurencesOfaSubstring.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 27 14:43:31 
 *      lastMod :  Sun 27 Jun 14:43:31 2021 
 **/

class Solution {
public:
    string removeOccurrences(string s, string part) {
      size_t pos;
      while((pos = s.find(part)) != string::npos) {
        s.erase(pos, part.length());
      }
      return s;
    }
};
