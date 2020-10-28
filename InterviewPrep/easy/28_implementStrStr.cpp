/**
 *      file    :  28_implementStrStr.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 28 23:43:41
 *      lastMod :  Wed Oct 28 23:43:41 2020
**/

class Solution {
public:
    int strStr(string haystack, string needle) {

      int j = 0;
      int size = needle.size();
      int index = 0;

      if (size == 0)
        return 0;

      if (haystack.size() < size)
        return -1;

      for (int i = 0; i < haystack.size() && j < size;) {

        if (haystack[i] == needle[j]) {
          ++i;
          ++j;
        }
        else {
          index++;
          i = index;
          j = 0;
        }
      }
      if (j == size)
        return index;
      return -1;
    }
};
