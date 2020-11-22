###
 #      file    :  657_Robot_return_to_origin.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 23 01:41:00
 #      lastMod :  Mon Nov 23 01:41:00 2020
###

class Solution:
    def judgeCircle(self, moves: str) -> bool:
      return not sum(1j**'RUL'.find(m) for m in moves)
      return moves.count('L') == moves.count('R') and moves.count('U') == moves.count('D')

