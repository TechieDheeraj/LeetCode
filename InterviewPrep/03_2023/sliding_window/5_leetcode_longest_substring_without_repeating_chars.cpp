/**
 *      file    :  5_leetcode_longest_substring_without_repeating_chars.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 19 14:43:37 
 *      lastMod :  Sun Mar 19 14:43:37 2023 
 **/

// Link:  https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
//
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.length();
      if (n == 0) return 0;
      unordered_set<char>hs;
      int res = INT_MIN;

      for (int i = 0, j = 0; j < n;) {
        if (hs.find(s[j]) != hs.end()) {
          while(hs.find(s[j]) != hs.end()) {
            hs.erase(s[i]);
            i++;
          }
        } else {
          hs.insert(s[j]);
          res = max(res, (j-i)+1);
          j++;
        }
      }
      return res;
    }
};
