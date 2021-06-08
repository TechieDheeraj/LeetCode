#! /usr/bin/env python3

###
 #      file    :  1816_truncateSentence.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 08 23:20:06
 #      lastMod :  Tue  8 Jun 23:20:06 2021
###

class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
      res = ' '.join(s.split()[:k])
      return res
