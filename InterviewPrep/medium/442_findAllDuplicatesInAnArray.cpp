/**
 *      file    :  442_findAllDuplicatesInAnArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 06 01:57:52 
 *      lastMod :  Sat Feb  6 01:57:52 2021 
 **/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> res;
      for (int i = 0; i < nums.size(); ++i) {
        if (nums[abs(nums[i])-1] < 0) {
          res.push_back(abs(nums[i]));
          continue;
        }
        nums[abs(nums[i])-1] *= -1;
      }
      return res;
    }
};
