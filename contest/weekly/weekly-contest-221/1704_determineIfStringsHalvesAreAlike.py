#! /usr/bin/env python3

###
 #      file    :  1704_determineIfStringsHalvesAreAlike.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 30 22:18:38
 #      lastMod :  Wed Dec 30 22:18:38 2020
###

class Solution:
    def halvesAreAlike(self, s: str) -> bool:
      l = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

      a =0
      b = 0
      leng = (int)(len(s)/2)

      for i in range(leng):
        if s[i] in l:
          a+=1
      for i in range(leng, len(s)):
        if s[i] in l:
          b+=1
      return a == b
