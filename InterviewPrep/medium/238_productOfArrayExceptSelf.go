/**
 *      file    :  238_productOfArrayExceptSelf.go
 *      author  :  techiedheeraj
 *      created :  2020 Dec 02 01:39:52
 *      lastMod :  Wed Dec  2 01:39:52 2020
**/

func productExceptSelf(nums []int) []int {

  var n int = len(nums)
  var arr []int = make([]int, n)
  var left int = 1
  var right int = 1

  for i, _:= range nums {
    if i > 0 {
      left = left * nums[i-1]
    }
    arr[i] = left
  }

  for i:= n-1; i >=0; i-- {
    if i < n-1 {
      right *= nums[i+1]
    }
    arr[i] *= right
  }

  return arr
}
