/**
 *      file    :  1904_numberOfFullRoundsYouHavePlayed.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 20 16:31:12 
 *      lastMod :  Sun 20 Jun 16:31:12 2021 
 **/

class Solution {
public:
    int numberOfRounds(string s, string f) {
      int start = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
      int finish = stoi(f.substr(0, 2)) * 60 + stoi(f.substr(3));

      if (start > finish) finish += 60*24;

      return max(0, finish/15-(start+14)/15);
    }
};
