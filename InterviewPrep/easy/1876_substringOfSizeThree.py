#! /usr/bin/env python3

###
 #      file    :  1876_substringOfSizeThree.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 05 00:37:21
 #      lastMod :  Sat  5 Jun 00:37:21 2021
###

class Solution:
    def countGoodSubstrings(self, s: str) -> int:
      count = 0
      for i in range(len(s)-2):
        if len(set(s[i:i+3])) == 3:
          count+=1
      return count
