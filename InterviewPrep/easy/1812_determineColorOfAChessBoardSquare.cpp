/**
 *      file    :  1812_determineColorOfAChessBoardSquare.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 09 00:57:08 
 *      lastMod :  Wed  9 Jun 00:57:08 2021 
 **/

class Solution {
public:
    bool squareIsWhite(string& coordinates) {

      /*
      bool isblack = true;

      for (auto &i : coordinates) {
        if (!isdigit(i)) {
          int h = i-'a';
          if (h % 2 == 0) {
            isblack = true;
          }
          else
            isblack = false;
        }
        else {
          int h = i-'0';
          if (h % 2 == 0) {
            if (isblack) {
              return true; // as for even numbers color will change
            }
            else {
              return false;
            }
          }
          return !isblack;
        }
      }
      return true;
      */
      // if sum of row and column is even it is white otherwise black
      return (coordinates[0]+coordinates[1]) % 2;
    }
};
