/**
 *      file    :  8_letter_combinations_of_a_phone_num.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 23 01:31:08 
 *      lastMod :  Thu Mar 23 01:31:08 2023 
 **/

// Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
//
class Solution {
public:
    vector<string>codes{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    bool main_frame = true;

    vector<string> letterCombinations(string &digits) {
      vector<string>res;
      if (digits.length() == 0) {
        if (main_frame) {
          return res;
        }
        res.push_back("");
        return res;
      }
      char ch = digits[0];
      main_frame = false;
      string str = digits.substr(1);
      vector<string> rres = letterCombinations(str);
      vector<string> mres;
      auto &digit_str = codes[ch-48-2];
      for (int l = 0; l < digit_str.length(); ++l) {
        for (int i = 0; i < rres.size(); ++i) {
          mres.push_back(digit_str[l]+rres[i]);
        }
      }
      return mres;
    }
};
