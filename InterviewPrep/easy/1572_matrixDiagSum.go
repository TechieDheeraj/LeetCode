/**
 *      file    :  1572_matrixDiagSum.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 24 01:53:05
 *      lastMod :  Tue Nov 24 01:53:05 2020
**/

func diagonalSum(mat [][]int) int {

  sum:=0
  i:=0
  for i < len(mat[0]) {
    sum+= mat[i][i]
    i++
  }
  k := len(mat)-1
  i=0
  for i < len(mat[0]) {
    if (i == k) {
      i++
      k--
      continue
    }
    sum+=mat[i][k]
    i++
    k--
  }

  return sum
}
 /*
  sum := 0
  for i, _:= range mat {
    for k, _:= range mat[i] {
      if i == k {
        sum+=mat[i][k]
      }
      if i+k == len(mat)-1 && i != k {
        sum+=mat[i][len(mat)-1-i]
      }
    }
  }
  return sum
}
*/
