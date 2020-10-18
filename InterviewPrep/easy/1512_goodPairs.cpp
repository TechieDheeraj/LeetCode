/**
 *      file    :  1512_goodPairs.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 16 01:35:24
 *      lastMod :  Fri Oct 16 01:35:24 2020
**/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

    // For same element pairs If element came 3 times then no. of pairs can be made (n*(n-1)/2)

    int pairs =0;
    int size = nums.size();

    unordered_map<int, int> hashMap;

    for (auto i : nums)
      hashMap[i]++;

    for (auto j: hashMap)
      pairs += (j.second * (j.second - 1))/2; // (n * (n-1))/2

     /*
      for (int i=0; i< size; ++i) {
        for(int j=i+1; j < size; ++j) {
          if (nums[i] == nums[j])
            pairs++;
        }
      }
      */
      return pairs;
    }
};
