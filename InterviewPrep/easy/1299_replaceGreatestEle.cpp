/**
 *      file    :  1299_replaceGreatestEle.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 18 00:25:03
 *      lastMod :  Sun Oct 18 00:25:03 2020
**/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

      int maxi= 0;
      int size = arr.size();

      maxi = -1;
      int tmp = 0;
      for (int i = size -1; i >= 0; i--) {
        tmp = arr[i];
        arr[i] = maxi;
        maxi = max(maxi, tmp);
      }

      /*
      int maxi = 0;

      for (int i= 0; i < arr.size()-1; ++i) {
        maxi = INT_MIN;
        for (int j =i+1; j < arr.size(); ++j) {
          maxi = max(maxi, arr[j]);
        }
        arr[i] = maxi;
      }
      arr[arr.size()-1] = -1;
     */
      return arr;
    }
};
