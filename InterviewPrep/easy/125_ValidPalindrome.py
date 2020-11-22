###
 #      file    :  125_ValidPalindrome.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 23 01:01:35
 #      lastMod :  Mon Nov 23 01:01:35 2020
###

class Solution:
    def isPalindrome(self, s: str) -> bool:
      st = [i.lower() for i in s if i.isalnum()]
      return st == st[::-1]

