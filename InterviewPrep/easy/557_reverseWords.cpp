/**
 *      file    :  557_reverseWords.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 16:35:43
 *      lastMod :  Sun Oct 25 16:35:43 2020
**/

class Solution {
public:
    void reverseMe(string& s, int start, int end) {
      while(start <= end) {
        int tmp = s[start];
        s[start] =s[end];
        s[end] = tmp;
        start++;
        --end;
      }
    }

    string reverseWords(string s) {
      int start = 0;
      int end = 0;
      int size = s.size();

      for (int i = 0; i < size && start < size; ++i) {
        if (s[i] != ' ' && size-i != 1) {
          end++;
          continue;
        }
        else if (s[i] == ' ') {
          reverseMe(s, start, end-1);
          start = i+1;
          end = i+1;
        }
        if (size-i ==1)
          reverseMe(s, start, end);
      }
      return s;
    }
};
