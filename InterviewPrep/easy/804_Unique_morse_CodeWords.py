###
 #      file    :  804_Unique_morse_CodeWords.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 23 00:16:50
 #      lastMod :  Mon Nov 23 00:16:50 2020
###

class Solution:

    def uniqueMorseRepresentations(self, words: List[str]) -> int:

      arr=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

      res=[]
      asc=string.ascii_lowercase

      for i in words:
        st=""
        for j in i:
          st+=arr[asc.index(j)]

        if st not in res:
          res.append(st)

      return len(res)
