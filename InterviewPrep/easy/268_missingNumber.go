/**
 *      file    :  268_missingNumber.go
 *      author  :  techiedheeraj
 *      created :  2020 Dec 10 15:11:28
 *      lastMod :  Thu Dec 10 15:11:28 2020
**/

func missingNumber(nums []int) int {

  var n int= len(nums)
  sum:= n * (n+1)
  sum/=2
  var suv int = 0
  for _, j:= range nums {
    suv += j
  }
  return sum-suv

}
