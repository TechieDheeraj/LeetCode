/**
 *      file    :  1773_countItemsMatchingRule.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 10 00:18:09 
 *      lastMod :  Thu 10 Jun 00:18:09 2021 
 **/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string& ruleKey, string& ruleValue) {
      int c=0;
      int index = 0;

      if (ruleKey == "type")
        index = 0;
      else if (ruleKey == "color")
        index = 1;
      else if (ruleKey == "name")
        index = 2;

      for (auto&s: items) {
        if (s[index] == ruleValue)
          c++;
      }

      return c;
    }
};
