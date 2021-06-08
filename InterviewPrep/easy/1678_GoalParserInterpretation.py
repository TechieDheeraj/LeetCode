#! /usr/bin/env python3

###
 #      file    :  1678_GoalParserInterpretation.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 08 23:29:39
 #      lastMod :  Tue  8 Jun 23:29:39 2021
###

class Solution:
    def interpret(self, s: str) -> str:
      res = ""
      for i in range(len(s)):
        if s[i] == '(':
          if s[i+1] == 'a':
            res+='al'
            i+=3
          elif s[i+1] ==')':
            res+='o'
            i+=1
        elif s[i] == 'G':
          res+='G'

      return res
