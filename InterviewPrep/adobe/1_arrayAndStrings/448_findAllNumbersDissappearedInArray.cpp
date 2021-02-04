/**
 *      file    :  448_findAllNumbersDissappearedInArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 05 01:00:38 
 *      lastMod :  Fri Feb  5 01:00:38 2021 
 **/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      int n = nums.size();
      vector<int>result;
     // vector<int>counters(n+1, 0);

      //for (int i = 0; i < n; ++i)
       // counters[nums[i]] = 1;
      for (int i = 0; i<n; ++i) {
        if (nums[abs(nums[i])-1] < 0) continue;
        nums[abs(nums[i])-1]*=-1;
      }

      //for (int i = 1; i < counters.size(); ++i) {
      for (int i = 0; i < n; ++i) {
        if (nums[i]>0)
          result.push_back(i+1);
        /*
        if (!counters[i])
          result.push_back(i);
          */
      }
      return result;
    }
};
