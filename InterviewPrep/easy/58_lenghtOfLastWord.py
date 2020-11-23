#! /usr/bin/env python3

###
 #      file    :  58_lenghtOfLastWord.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 24 02:11:49
 #      lastMod :  Tue Nov 24 02:11:49 2020
###

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
      if len(s) == 0:
        return 0
      m = s.split()
      if len(m)==0:
        return 0
      else:
        n = len(m)
        return len(m[n-1])
