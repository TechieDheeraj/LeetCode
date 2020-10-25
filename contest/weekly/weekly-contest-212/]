/**
 *      file    :  slowestKey.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 12:36:01
 *      lastMod :  Sun Oct 25 12:36:01 2020
**/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {

      vector<pair<char, int>> hashMap;
      int size = keysPressed.length();

      int i =0;
      int maxe = 0;
      char result = 0;
      pair<char, int> tmp;
      tmp.first = keysPressed[i];
      tmp.second = releaseTimes[i];
      hashMap.push_back(tmp);
      maxe = releaseTimes[i];

      for (i =1; i < size; ++i) {
        int diff = releaseTimes[i]-releaseTimes[i-1];
        tmp.first = keysPressed[i];
        tmp.second = diff;
        hashMap.push_back(tmp);
        maxe = max(maxe, diff);
      }
      cout << " maxe " << maxe << endl;
      for (auto j: hashMap) {
        if (j.second != maxe)
          continue;
        result = result > j.first ? result : j.first;
      }
      return result;
    }
};
