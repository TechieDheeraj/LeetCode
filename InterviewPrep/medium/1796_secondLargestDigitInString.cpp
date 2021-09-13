/**
 *      file    :  1796_secondLargestDigitInString.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 08 00:17:45 
 *      lastMod :  Tue  8 Jun 00:17:45 2021 
 **/

class Solution {
public:
    int secondHighest(string s) {
      unordered_set<char>hs;
      priority_queue<int>pq;
      int res = 0;

      for(auto &i : s) {
        if (isdigit(i)) {
          if (hs.find(i) != hs.end())
            continue;
          int num = i-'0';
          pq.push(num);
          hs.insert(i);
        }
      }

      if (pq.size() <= 1)
        return -1;

      int j = 2;
      while (j > 0) {
        res = pq.top(); pq.pop();
        --j;
      }

      return res;
    }
};
