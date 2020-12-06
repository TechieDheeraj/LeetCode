/**
 *      file    :  231_powerOfTwo.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 20:36:12
 *      lastMod :  Sun Dec  6 20:36:12 2020
 **/

class Solution {
public:
  /*

          let x = 13 ,
        then its binary representation is
        #		64 32 16 8 4 2 1
        #	   (0   0  0 0 1 1 0 1 ) == ( 00001101 )  { 8 + 4 + 1 = 13 }
        now lest see how  ( -13 )  is stored in binary
        -> in order to store negative numbers , computer first flips all bits in its binary resentation of it          absolute value
         so 00001101 becomes 11110010
        -> then computer adds a bit
        so   11110010 + 00000001 = 11110011

        this process of adding 1 bit by computer , lets us extract last set bit
        lets see again in steps :
        -> task : store -13
        # step 1 : abs | -13 |  = | 13 |  =  00001101
        # step 2 : flip all bits                =  11110010
        # step 3 : add one bit                 =  11110010 + 00000001
        #result :                        =  11110011

        NOW the question arises how do we use this FACT ? to extract last set bit
        we extract the last set bit and removes that bit in its binary rep

        to extract last set bit we do X bitwiseAND -X
        13        = 00001101
        -13       = 11110011
        13&(-13)  = 00000001

        now we remove this from X (here 13)
        13                          = 00001101
        (minus) last set bit = 00000001
        (equals)                  = 00001100
        so far so good , we have sucessfully removed last set bit

        now you might have guessed the answer, lets denote 2 , 4, 64 in binary
             ( 64 32 16 8 4 2 1 )  this is what set bit in binary represents
           2 = 0  0	 0  0 0 1 0
           4 = 0  0  0  0 1 0 0
          64 = 1  0  0  0 0 0 0

          so in case a no is power of two then the only one bit must be set in its binary representation . wallah ! we got the answer
          -> remove the last set bit
          -> look if no becomes zero
          -> if zero then it must be having only one set bit ie - it must have been the power of 2

        recap :   x&(-x) : tells the last set bit
            : x  = x - x&-x removes the last set bit

  */

    bool isPowerOfTwo(int n) {
      if (n <= 0) return false;
   //  return (n & n-1) == 0 ? true: false;
      return (n - (n&-n)) == 0 ? true: false;
    }
};
