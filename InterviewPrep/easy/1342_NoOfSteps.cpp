/**
 *      file    :  1342_NoOfSteps.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:30:57
 *      lastMod :  Wed Oct 14 01:30:57 2020
**/

class Solution {
public:
    int numberOfSteps (int num) {
     
   
      int count = 0;
      
      while(num) {
        if (num & 1)
          num -= 1;
        else
          num >>=1;
        
        count++;
      }
      
      return count;
      
/*
       int count = 0;
      
      while(num > 0) {
        if (num % 2)
          num -= 1;
        else
          num/=2;
        
        count++;
      }
      
      return count;
 */     
    }
};
