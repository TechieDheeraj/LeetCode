###
 #      file    :  118_pascalTriangle.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 17 02:30:44
 #      lastMod :  Tue Nov 17 02:30:44 2020
###

#! /usr/bin/env python3

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:

        if numRows is 0:
          return []
        if numRows is 1:
          return [[1]]

        last = self.generate(numRows-1)

        res = []
        for i in range(numRows):
          if i is 0 or i == numRows-1:
            res.append(1)
          else:
            res.append(last[-1][i-1] + last[-1][i])

        last.append(res)
        return last

