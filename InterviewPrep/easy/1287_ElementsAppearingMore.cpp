/**
 *      file    :  1287_ElementsAppearingMore.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 21 01:49:36 AM
 *      lastMod :  Wed 21 Oct 2020 01:49:36 AM IST
**/

#include<utility>
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
      /*
      int size = arr.size();
      float occur = (float)(size/4);
      unordered_map<int,int> hashMap;
      std::pair<float, int>prevOccur;
      
      for (auto i : arr)
        hashMap[i]++;
      
      for (auto i : hashMap) {
        if (float(i.second) >= occur) {
          if (prevOccur.second < float(i.second)) {
            prevOccur = make_pair(i.first, float(i.second));
          }
        }
      }
      
      return prevOccur.first;
      */
        
      int size = arr.size();
      float occur = (float)(size/4);
      stack<int> st;
      int maxc = 0;
      std::pair<int, int> maxC; // for maximum out of all 
      
      st.push(arr[0]);
      
      for (auto i : arr) {
        if (st.top() == i) {
          maxc++;
        }
        else {
          maxc = 0; 
          st.pop();
          st.push(i);
        } 
        if ((float)maxc >= occur) {
          maxC = make_pair(max(maxC.first, maxc), i);
        }
      }
      
      return maxC.second;
    }
};
