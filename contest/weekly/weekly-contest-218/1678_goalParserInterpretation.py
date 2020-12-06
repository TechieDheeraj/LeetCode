#! /usr/bin/env python3

###
 #      file    :  1678_goalParserInterpretation.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 06 17:37:15
 #      lastMod :  Sun Dec  6 17:37:15 2020
###

class Solution:
    def interpret(self, command: str) -> str:
      res = ""
      command = command.replace('()', 'o')
      command = command.replace('(al)', 'al')
      """
      for i in command:
        if i == 'G':
          res+=i
        if '()' in command:
          res+='o'
        if '(al)' in command:
          res+='al'
      """
          
      return command 
        
