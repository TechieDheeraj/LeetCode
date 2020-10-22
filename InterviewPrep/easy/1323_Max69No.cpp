/**
 *      file    :  1323_Max69No.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 22 12:43:57 AM
 *      lastMod :  Thu 22 Oct 2020 12:43:57 AM IST
**/

class Solution {
public:
    int maximum69Number (int num) {
      
      string str = to_string(num);
      
      for (auto& i : str) {
        if (i == '6') { 
          i = '9'; 
          break; 
        }
      }
        
      return stoi(str);
/*
      int n = num;
      int tmp = 0;
      int r = 0;
      int finalN = 0;
      bool isfound = false;
      stack<int>result;
      
      while (n) {
        tmp = n % 10;
        result.push(tmp); 
        n /= 10;
      }
      
      while(result.size() > 0) {
        int intr = result.top();
        if (intr == 6 && !isfound) {
          isfound = true;
          result.pop();
          result.push(9);
        }
        
        finalN *= 10;  
        finalN += result.top();
        result.pop();
      }
      
      return finalN;
      */
    }
};
