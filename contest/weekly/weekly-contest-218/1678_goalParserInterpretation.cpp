/**
 *      file    :  1678_goalParserInterpretation.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 06 18:16:12
 *      lastMod :  Sun Dec  6 18:16:12 2020
 **/

class Solution {
public:
    string interpret(string command) {

    string ans;
    for (int i =0; i < command.size(); )
      if (command[i] == 'G')  {
        ans+=command[i];
        ++i;
      }
      else if (command[i+1] == ')') {
        ans+="o";
        i+=2;
      }
      else {
        ans+="al";
        i+=4;
      }
      return ans;
    }
};
