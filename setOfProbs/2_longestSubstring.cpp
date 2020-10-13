/**
 *      file    :  2_longestSubstring.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 14 01:13:44
 *      lastMod :  Wed Oct 14 01:13:44 2020
**/

class Solution {
public:
  
int lengthOfLongestSubstring(string s) {
  
  int size = s.size();
  int res = 0;
  
  for ( int i = 0; i< size; ++i) {
    
    vector<bool> chars(256);
    
    for (int j = i ; j < size; ++j) {
      
      if (chars[s[j]] == true)
        break;
      
      else {
        res = max(res, j-i+1);
        chars[s[j]] = true;
      }
    }
    
    chars[s[i]] = false;
  }
  
  return res;
}

/* 
  DID NOT WORK 

int lengthOfLongestSubstring(string s) {
       
      int size = s.size();
      int count = 0;
      int maxSize = 0;
      unordered_set<int> hashSet;
      
      if (size == 0)
        return 0;
      if (size == 1)
        return 1;
        
      for (int i = 0; i < size; ++i) {
        if(hashSet.find(s[i]) == hashSet.end()) {
          hashSet.insert(s[i]);
          count++;
        }
        else
          count = 1;
        
        maxSize = maxSize > count ? maxSize : count;
      }
      return maxSize;
    }
*/
  
};   

