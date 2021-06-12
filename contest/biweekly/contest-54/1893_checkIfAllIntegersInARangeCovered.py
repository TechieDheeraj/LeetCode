#! /usr/bin/env python3

###
 #      file    :  1893_checkIfAllIntegersInARangeCovered.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 12 23:48:59
 #      lastMod :  Sat 12 Jun 23:48:59 2021
###

class Solution:
    def isCovered(self, ranges: List[List[int]], left: int, right: int) -> bool:
      arr = []
      for l in ranges:
        for i in range(l[0], l[1]+1):
          arr.append(i)
      for i in range(left, right+1):   
        if i not in arr:
          return False 
      return True  
