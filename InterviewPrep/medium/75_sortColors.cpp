/**
 *      file    :  75_sortColors.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 23 12:14:11 
 *      lastMod :  Mon 23 Aug 12:14:11 2021 
 **/

class Solution {
public:
    void sortColors(vector<int>& nums) {
      vector<int>count(3);
      vector<int>res(nums.size());

      // counting sort is used when length of array is very big compared to maximum element present in the array
      for(auto&i: nums) // store the count of elements
        count[i]+=1;

      /*
      for (int i = 1; i < count.size(); ++i) { // add cumulative sum
        count[i]+=count[i-1];
      }
      */

      /*
      for (auto&i: nums) {
        if (count[i] > 0) {
          res[count[i]-1] = i;
          count[i]--;
        }
      }
      nums = res;
      */
      int idx = 0;
      for(int i = 0;i < count.size(); ++i) {
        while(count[i] > 0) {
          nums[idx] = i;
          count[i]--;
          idx++;
        }
      }
    }
};
