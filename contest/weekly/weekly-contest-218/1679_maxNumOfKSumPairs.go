/**
 *      file    :  1679_maxNumOfKSumPairs.go
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 17:57:08
 *      lastMod :  Sun Dec  6 17:57:08 2020
**/

func maxOperations(nums []int, k int) int {
  sort.Ints(nums)

  var ans int = 0
  var i int = 0
  var j int = len(nums)-1

  for i < j {
    var val int = nums[i] + nums[j]
    if val == k {
      ans++
      i++
      j--
    } else if val > k {
      j--
    } else {
      i++
    }
  }
  return ans
}
