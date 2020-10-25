/**
 *      file    :  1047_removeAdjacent.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 17:14:35
 *      lastMod :  Sun Oct 25 17:14:35 2020
**/

class Solution {
public:
    string removeDuplicates(string S) {
        
      string result;
      for (char &c: S) {
        if (result.empty())
          result.push_back(c);
        else if (c == result.back())
          result.pop_back();
        else
          result.push_back(c);
      }
      return result;
    }
};
