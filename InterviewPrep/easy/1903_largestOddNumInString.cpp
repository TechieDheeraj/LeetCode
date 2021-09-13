/**
 *      file    :  1903_largestOddNumInString.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 20 11:50:47 
 *      lastMod :  Sun 20 Jun 11:50:47 2021 
 **/

class Solution {
public:
    string largestOddNumber(string num) {
      int size = num.size();
      string tmp = num;
      while(size) {
        if ((tmp[size-1]-'0') & 1) {
          return tmp.substr(0, size);
        }
        size--;
      }
      return "";
    }
};
