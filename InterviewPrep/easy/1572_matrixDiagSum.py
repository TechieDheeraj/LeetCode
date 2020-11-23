###
 #      file    :  1572_matrixDiagSum.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 24 01:53:22
 #      lastMod :  Tue Nov 24 01:53:22 2020
###

class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
      summ = 0

      for i in range(len(mat)):
        for j in range(len(mat[0])):
          if (i == j):
            summ+=mat[i][j]
          if i+j == len(mat[0])-1:
            if i == j:
              continue
            summ+=mat[i][len(mat[0])-1-i]
      return summ
