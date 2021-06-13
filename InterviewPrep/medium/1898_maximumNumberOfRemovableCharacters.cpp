/**
 *      file    :  1898_maximumNumberOfRemovableCharacters.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 14 00:31:42 
 *      lastMod :  Mon 14 Jun 00:31:42 2021 
 **/

class Solution {
public:
    bool check(string& p, string& arr) {
      int n = arr.size();
      int m = p.length();
      int k = 0;
      int l = 0;

      while (k < m && l < n) {
        if (arr[l] != '/' && p[k] == arr[l]) // found first position element
          k++;
        l++;
      }
      return k == m;
    }

    int maximumRemovals(string& s, string& p, vector<int>& rem) {
      int r = rem.size();
      int l = 0;
      string arr = s;

      while(l <= r) {
        int mid = (l+r)/2;

        for (int i = 0; i < mid; ++i) arr[rem[i]] = '/';

        if (check(p, arr))
          l = mid+1;
        else {
          for (int i = 0; i< mid; ++i) {
            arr[rem[i]] = s[rem[i]];
          }

          r = mid-1;
        }
      }
      return r;
    }
};
