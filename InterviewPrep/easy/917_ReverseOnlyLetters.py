###
 #      file    :  917_ReverseOnlyLetters.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 23 01:16:15
 #      lastMod :  Mon Nov 23 01:16:15 2020
###

class Solution:
    def reverseOnlyLetters(self, s: str) -> str:

      i = 0
      j = len(s)-1
      l = string.ascii_lowercase

      while i < j:
        if s[i].lower() not in l:
          i+=1
          continue
        if s[j].lower() not in l:
          j-=1
          continue
        k = list(s)
        k[i], k[j] = k[j], k[i]
        s="".join(k)

        i+=1
        j-=1

      return s
