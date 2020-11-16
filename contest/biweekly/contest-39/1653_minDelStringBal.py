###
 #      file    :  1653_minDelStringBal.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 16 13:56:00
 #      lastMod :  Mon Nov 16 13:56:00 2020
###

#! /usr/bin/env python3

class Solution:
    def minimumDeletions(self, s: str) -> int:

      na = s.count('a')
      nb = s.count('b')

      b = na
      ca = 0
      cb = 0
      for i in s:
        if i is 'a':
          ca+=1
        else:
          cb+=1
        b = min(b, cb + (na-ca))

      return b
