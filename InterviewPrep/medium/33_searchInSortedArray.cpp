/**
 *      file    :  33_searchInSortedArray.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 21 02:37:49
 *      lastMod :  Sat Nov 21 02:37:49 2020
**/

class Solution {
public:
    int search(vector<int>& nums, int target) {

      int l = 0, r=nums.size()-1;

      while (l < r) {
        int mid = (l+r)/2;

        if (nums[mid] > nums[r]) l = mid+1;
        else r = mid;
      }

      int rot = l;
      l = 0, r = nums.size()-1;

      while (l <= r) {
        int mid = (l+r)/2;
        int realmid = (mid+rot) % nums.size();

        if (nums[realmid] == target)
          return realmid;
        if (nums[realmid] < target) l = mid+1;
        else r = mid-1;
      }
      return -1;

      /*
      unordered_set<int,int>hm;
      for(auto &i: nums)
        hm[nums[i]] = ;

      return hashSet.find(target) != hashSet.end();
      */
    }
};
