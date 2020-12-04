/**
 *      file    :  4_medianOfTwoSortedArrays.go
 *      author  :  techiedheeraj
 *      created :  2020 Dec 04 23:48:48
 *      lastMod :  Fri Dec  4 23:48:48 2020
**/

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
  /*
  if len(nums1) == 0 {
    return 0
  }
  if len(nums2) == 0 {
    return 0
  }
  */
  var arr []int = make([] int, len(nums1)+len(nums2))
  for i, j:= range nums1 {
    arr[i] = j
  }
  var i int = len(nums1)
  for _, j:= range nums2 {
    arr[i] = j
    i+=1
  }
  sort.Ints(arr)
  var m int = len(arr)/2
  if (len(arr) % 2) != 0 {
    return float64(arr[m])
  } else {
    return (float64(arr[m]) + float64(arr[m-1])) / 2
  }
  return 0
}
