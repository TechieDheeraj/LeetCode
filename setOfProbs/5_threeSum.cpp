/**
 *      file    :  5_threeSum.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:22:59
 *      lastMod :  Wed Oct 14 01:22:59 2020
**/

/*   TLE Error is coming on Leetcode... */
class Solution {
public:
  
 struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
  }; 
    vector<vector<int>> threeSum(vector<int>& nums) {
      
      vector<vector<int>> result;
      unordered_set < vector<int>, VectorHash> hashSet;
      bool isFound = false;
      int num = 0, k = 0;
      
      for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
          num = 0 - (nums[i] + nums[j]);
          for (k = j+1; k < nums.size(); ++k) {
            if (nums[k] == num) {
              isFound = true;
              break;
            }
          }
          if(isFound) { 
            vector<int>res = {nums[i], nums[j], nums[k]};
            sort(res.begin(), res.end());
            if (hashSet.find(res) == hashSet.end()) {
              hashSet.insert(res);
              result.insert(result.begin(),res);
            }
          }
          isFound = false;
        }
      }
      return result;
    }
};
