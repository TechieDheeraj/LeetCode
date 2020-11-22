/**
 *      file    :  657_Robot_return_to_origin.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 23 01:39:53
 *      lastMod :  Mon Nov 23 01:39:53 2020
**/

class Solution {
public:
    bool judgeCircle(string moves) {
      int x =0;
      int y =0;

      for (auto &i: moves) {
        if (i == 'L') x-=1;
        else if (i == 'R') x+=1;
        else if (i == 'U') y+=1;
        else if (i == 'D') y-=1;
      }

      return !(x | y);
    }
};
