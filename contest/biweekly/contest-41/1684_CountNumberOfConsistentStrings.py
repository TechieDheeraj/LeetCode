#! /usr/bin/env python3

###
 #      file    :  1684_CountNumberOfConsistentStrings.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 14 23:51:22
 #      lastMod :  Mon Dec 14 23:51:22 2020
###

class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
      count = 0
      for i in words:
        c = True
        for j in i:
          if j not in allowed:
            c = False
            break;
        if c == False:
          continue    
        else:
          count+=1  
          
      return count 
