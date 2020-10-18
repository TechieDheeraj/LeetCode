/**
 *      file    :  20_validParenth.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 15 00:51:40
 *      lastMod :  Thu Oct 15 00:51:40 2020
**/

class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      
      for (auto i : s) {
        if (i == '(' || i == '{' || i == '[' ) st.push(i);
        else {
          if(st.empty()) return false;
          if (i == '}' && st.top() != '{') return false; 
          if (i == ']' && st.top() != '[') return false; 
          if (i == ')' && st.top() != '(') return false; 
          st.pop();
        }
      }
      return st.empty();
    }
};
