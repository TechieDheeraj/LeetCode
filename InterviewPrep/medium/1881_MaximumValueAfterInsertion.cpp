/**
 *      file    :  1881_MaximumValueAfterInsertion.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 05 15:19:18 
 *      lastMod :  Sat  5 Jun 15:19:18 2021 
 **/

class Solution {
public:
    int replace(string& n, int x, int idx, int neg) {

      if (idx >= n.length()) {
        return n.length();
      }

      if (neg) {
        if (x < n[idx]-'0')
          return idx;
      }
      else {
        if (x > n[idx]-'0')
          return idx;
      }

      return replace(n, x, ++idx, neg);
    }

    string maxValue(string n, int x) {
      long idx = 0;
      bool neg = false;

      if (n[0] == '-')
        neg = true;

      if (neg)
        idx = replace(n, x, 1, true);
      else
        idx = replace(n, x, 0, false);

      return n.insert(idx, to_string(x));
    }
};
