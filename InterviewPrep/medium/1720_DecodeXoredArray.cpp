/**
 *      file    :  1720_DecodeXoredArray.cpp
 *      author  :  techiedheeraj
 *      created :  2021 Jan 10 15:46:24
 *      lastMod :  Sun Jan 10 15:46:24 2021
 **/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
      vector<int>res;
      res.push_back(first);
      for (auto &i: encoded) {
        first = i ^ first;
        res.push_back(first);
      }
      return res;
    }
};
