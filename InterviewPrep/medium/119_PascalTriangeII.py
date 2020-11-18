###
 #      file    :  119_PascalTriangeII.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 19 01:41:40
 #      lastMod :  Thu Nov 19 01:41:40 2020
###

#! /usr/bin/env python3

class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
      if rowIndex == 0:
        return [1]

      last = self.getRow(rowIndex-1)
      out = [1] * (rowIndex+1)
      print(out, rowIndex)
      for i in range(1, len(out)-1):
        out[i] = last[i-1]+last[i]

      print(out, rowIndex)
      return out
