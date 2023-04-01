/**
 *      file    :  17_lc_letter_combinations_of_phone_number.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Apr 01 22:14:57 
 *      lastMod :  Sat Apr  1 22:14:57 2023 
 **/


// Implemented: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//
class Solution {
public:
    vector<string>codes{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    bool main_frame = true;
    vector<string> letterCombinations(string digits) {
      if (digits.length() == 0) {
        vector<string>result;
        if (main_frame) {
          return result;
        }
        result.push_back("");
        return result;
      }

      main_frame = false;
      char ch = digits[0];
      string new_str = digits.substr(1);
      vector<string> res = letterCombinations(new_str);

      string s = codes[ch-'0'-2];
      vector<string>mres;
      for (int i = 0;i < s.length(); ++i) {
        for (auto &j: res) {
          mres.push_back(s[i]+j); 
        }
      }
      return mres;
    }
};
