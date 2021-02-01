/**
 *      file    :  1_twoSum.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 01 14:53:30 
 *      lastMod :  Mon Feb  1 14:53:30 2021 
 **/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> hm;

      for (int i = 0; i < nums.size(); ++i) {
        int element = target-nums[i];
        if (hm.find(element) != hm.end() && hm[element] != i)
          return {i, hm[element]};

        hm[nums[i]]=i;
//        hm.insert(pair<int, int>(nums[i], i));
      }
      return {};
    }
};
