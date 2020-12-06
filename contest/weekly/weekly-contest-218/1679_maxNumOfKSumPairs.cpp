/**
 *      file    :  1679_maxNumOfKSumPairs.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 17:37:54
 *      lastMod :  Sun Dec  6 17:37:54 2020
 **/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      unordered_map<int, int> hm;

      for (auto &i: nums)
        hm[i]++;
      int c =0;

      for (int i = 0; i < nums.size(); ++i) {
        if (hm[nums[i]] < 1)
          continue;
        hm[nums[i]]--;
        if (hm.find(k-nums[i]) != hm.end() && hm[k-nums[i]]>=1) {
          c++;
          hm[k-nums[i]]--;
        }
      }
      return c;
    }
};
