###
 #      file    :  1_CheckTwoStringArraysEquivalent.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 23 02:11:22
 #      lastMod :  Mon Nov 23 02:11:22 2020
###

class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:

      s = ""
      for i in word1:
        s+=i
      k = ""
      for j in word2:
        k+=j

      if s == k: return True
      else: return False
