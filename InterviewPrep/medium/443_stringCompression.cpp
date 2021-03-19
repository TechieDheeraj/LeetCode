/**
 *      file    :  443_stringCompression.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Mar 20 00:19:43 
 *      lastMod :  Sat Mar 20 00:19:43 2021 
 **/

class Solution {
public:
    int compress(vector<char>& chars) {
      char prev = (char)254;
      int count = 0;
      int idx = 0;

      if (chars.size() <= 1)
        return chars.size();

      for(auto c: chars) {
        if (c == prev) {
          count++;
        }
        else {
          if (prev != (char)254) {
            chars[idx++] = prev;
            if (count > 1) {
              auto counter = to_string(count);
              for (auto &n : counter) {
                chars[idx++] = n;
              }
            }
          }
          prev = c;
          count = 1;
        }
      }
      chars[idx++] = prev;
      if (count > 1) {
        auto counter = to_string(count);
        for (auto &n : counter) {
        chars[idx++] = n;
        }
      }
      return idx;
    }
};
