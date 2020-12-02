/**
 *      file    :  81_searchInRotatedArrayII.go
 *      author  :  techiedheeraj
 *      created :  2020 Dec 03 01:44:42
 *      lastMod :  Thu Dec  3 01:44:42 2020
**/

func search(nums []int, target int) bool {

  var hm = make(map[int]int)

  for i, j := range nums {
    hm[j] = i
  }

  _, ok := hm[target]
  if ok == true {
    return true
  }

  return false
}
