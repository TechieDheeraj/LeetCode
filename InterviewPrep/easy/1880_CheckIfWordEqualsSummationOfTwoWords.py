#! /usr/bin/env python3

###
 #      file    :  1880_CheckIfWordEqualsSummationOfTwoWords.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 05 00:38:58
 #      lastMod :  Sat  5 Jun 00:38:58 2021
###

class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
      letters=string.ascii_lowercase
      num = ''.join([str(letters.index(i)) for i in firstWord])
      res = int(num)
      num = ''.join([str(letters.index(i)) for i in secondWord])
      res += int(num)
      num = ''.join([str(letters.index(i)) for i in targetWord])
      return True if res == int(num) else False
