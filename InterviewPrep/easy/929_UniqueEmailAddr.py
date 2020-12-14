#! /usr/bin/env python3

###
 #      file    :  929_UniqueEmailAddr.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 14 23:57:39
 #      lastMod :  Mon Dec 14 23:57:39 2020
###

class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
      newEmails = list()
      for i in emails:
        ln = i.split('@')[0]
        ln = ln.split('+')[0]
        dn = i.split('@')[1]
        newName = ln.replace('.', '')
        name = newName+"@"+dn
        if name not in newEmails:
          newEmails.append(name)
      return len(newEmails)
