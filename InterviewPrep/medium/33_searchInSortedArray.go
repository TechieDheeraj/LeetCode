/**
 *      file    :  33_searchInSortedArray.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 21 02:37:19
 *      lastMod :  Sat Nov 21 02:37:19 2020
**/

package main

import (
  "fmt"
)

func search(nums []int, target int) int {

  var l int = 0
  var r int = len(nums)-1

  for l < r {
    var mid int = (l+r)/2

    if nums[mid] > nums[r] {
      l = mid+1
    } else {
      r = mid
    }
  }

  var rot int = l
  l = 0
  r = len(nums)-1

  for l <= r  {
    var mid int = (l+r)/2
    var realmid int = (mid+rot) % len(nums)

    if nums[realmid] == target {
      return realmid
    }
    if nums[realmid] < target {
      l = mid+1
    } else {
      r = mid-1
    }
  }

  return -1

}


/*func search(nums []int, target int) int {

  var hm = make(map[int]int)

  for i, j := range nums {
    hm[j] = i
  }

  k, ok := hm[target]
  if ok == true {
    return k
  }

  return -1
}
*/
