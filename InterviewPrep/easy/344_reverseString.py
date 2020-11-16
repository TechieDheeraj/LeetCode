###
 #      file    :  344_reverseString.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 17 00:18:21
 #      lastMod :  Tue Nov 17 00:18:21 2020
###

#! /usr/bin/env python3

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """

        i = 0;
        j = len(s)-1

        while i < j:
          s[i], s[j] = s[j], s[i]

          i+=1
          j-=1
