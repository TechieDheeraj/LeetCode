/**
 *      file    :  81_searchInRotatedArrayII.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 21 02:47:51
 *      lastMod :  Sat Nov 21 02:47:51 2020
**/

package main

import (
  "fmt"
)

class Solution {
public:
    bool search(vector<int>& nums, int target) {

      unordered_set<int>hashSet;
      for(auto &i: nums)
        hashSet.insert(i);

      return hashSet.find(target) != hashSet.end();

    }
}
