/**
 *      file    :  1935_maxNumOfWordsYouCanType.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Aug 30 00:01:37 
 *      lastMod :  Mon 30 Aug 00:01:37 2021 
 **/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
      stringstream ss(text);
      int count = 0;
      string word;
      bool isFound = true;
      while(ss >> word) {
        isFound = true;
        for (int i = 0;i < brokenLetters.length(); ++i) {
          if (word.find(brokenLetters[i]) != string::npos) {
            isFound = false;
            break;
          }
        }
        if (isFound)
          count++;
      }
      return count;
    }
};
