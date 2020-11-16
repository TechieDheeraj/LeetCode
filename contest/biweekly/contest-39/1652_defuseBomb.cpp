/**
 *      file    :  1652_defuseBomb.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 16 13:51:01
 *      lastMod :  Mon Nov 16 13:51:01 2020
**/

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
      int size = code.size();
      vector<int>result(size);

      if (k == 0) {
        fill(code.begin(), code.end(), 0);
        return code;
      }

      for (int i = 0; i < size; ++i) {
        if (k < 0) {
          int idx = 0;
          if (k+i >= 0)
            idx = (k+i);
          else
            idx = size+(k+i);
          int sum = 0;
          //cout << "startin code " << code[idx]  << "idx " << idx << endl;
          for (int j = 0; j < abs(k); ++j ) {
            int id = (idx+j) % size;
            sum+=code[id];
          //  cout << " code " << code[id] << endl;
          }

          result[i] = sum;
        }
        else if (k > 0) {
          int idx = i;
          int sum = 0;
          for (int j = 1; j <= k; ++j ) {
            int id = (idx+j) % size ;
            sum+=code[id];
          }

          result[i] = sum;
        }
      }
      return result;

    }
};
