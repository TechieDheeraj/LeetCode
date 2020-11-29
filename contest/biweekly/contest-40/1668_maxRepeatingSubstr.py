#! /usr/bin/env python3

###
 #      file    :  1668_maxRepeatingSubstr.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 29 18:36:39
 #      lastMod :  Sun Nov 29 18:36:39 2020
###

class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
      res = sequence.find(word)
      i = 2
      c = 1
      if res == -1:
        return 0
      origw = word
      while i < 100:
        word = origw*i
        #print(word, c)
        if sequence.find(word) == -1:
          return c
        else:
          c+=1
          i+=1

      return c

