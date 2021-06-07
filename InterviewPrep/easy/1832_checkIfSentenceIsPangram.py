#! /usr/bin/env python3

###
 #      file    :  1832_checkIfSentenceIsPangram.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 08 00:32:44
 #      lastMod :  Tue  8 Jun 00:32:44 2021
###

class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
      lc = string.ascii_lowercase
      ll = list('0'*26)

      for i in sentence:
        ll[lc.index(i)] = '1'

      return True if (len(lc) == ll.count('1')) else False

