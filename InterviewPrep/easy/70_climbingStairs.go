/**
 *      file    :  70_climbingStairs.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 20 01:36:20
 *      lastMod :  Fri Nov 20 01:36:20 2020
**/

package main

import (
  "fmt"
)

func climb_stairs(i int,n int, arr[]int) int {
  if i > n {
    return 0
  }
  if i == n {
    return 1
  }
  if arr[i] > 0 {
    return arr[i]
  }

  arr[i] = climb_stairs(i+1, n, arr) + climb_stairs(i+2, n, arr)
  return arr[i]
}

func climbStairs(n int) int {
  arr:=make([]int, n+1)
  return climb_stairs(0, n, arr)

}
