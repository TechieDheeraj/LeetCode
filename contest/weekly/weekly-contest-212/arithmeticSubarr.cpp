/**
 *      file    :  arithmeticSubarr.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 12:38:00
 *      lastMod :  Sun Oct 25 12:38:00 2020
**/

class Solution {
public:
    bool checkAP(vector<int> &arr, int l, int r) {

      int diff = arr[1] - arr[0];
      bool isAP = false;

      if (r-l == 1)
        return true;

      for (int i = 1; i < (r-l); ++i) {
        if (diff != (arr[i+1] - arr[i])) {
          return false;
        }
       else
          isAP =  true;
      }

      return isAP;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
      int size = l.size();
      vector<bool>result;

      for (int i=0; i< size; ++i) {
        vector<int> subarr;
        for (int k = l[i]; k <= r[i]; ++k) {
          subarr.push_back(nums[k]);
        }
        bool res;
        sort(subarr.begin(), subarr.end());
        res = checkAP(subarr,l[i],r[i]);
        result.push_back(res);
      }
      return result;
    }
};
