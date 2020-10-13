/**
 *      file    :  169_majorityElem.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:32:55
 *      lastMod :  Wed Oct 14 01:32:55 2020
**/

class Solution {
public:
    int majorityElement(vector<int>& nums) {

     /* int reqNo = nums.size()/2;
      int element = -1;

      unordered_map<int, int> hashMap;

      for (auto &i: nums) {
        hashMap[i]++;
        if (hashMap[i] > reqNo)
          element = i;
      }

      return element;
      */


      unordered_map<int, int> hashMap;

      for (auto &i: nums)
        hashMap[i]++;

      int num = 0;

      for (auto j: hashMap) {
        if (j.second > nums.size()/2)
          num = j.first;
      }
      return num;
    }
};
