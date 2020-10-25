/**
 *      file    :  1002_findCommonchar.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 15:54:34
 *      lastMod :  Sun Oct 25 15:54:34 2020
**/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {

      vector<string> result;
      int size = A.size();
      string st;
      unordered_map<int, unordered_map<char,int>> hashMap;
      unordered_set<char> hashSet;

      for (int i=0; i < A.size(); ++i) {
        unordered_map<char, int> hm;
        for (auto j : A[i])
          hm[j]++;
        hashMap[i] = hm;
      }
     /*
      for (auto itt: hashMap) {
        cout << "copied Map : " <<  itt.first << " { ";
        for (auto p: itt.second) {
          cout << "{" << p.first << "," << p.second  << "}" << ", ";
        }
        cout << "}" << endl;
      }
      cout << " done .." << endl;
      */

      st = A[0];

      for ( auto i : st) {
        if(hashSet.find(i) == hashSet.end())
          hashSet.insert(i);
        else
          continue;

        pair<char, int> pr;

        pr.first = 0;
        pr.second = INT_MAX;

        for (auto j: hashMap) {
          unordered_map<char,int>::iterator itt = j.second.begin();
          auto p = j.second.find(i);

          if (p == j.second.end()) {
            pr.second = INT_MAX;
            pr.first = 0;
            break;
          }
          else {
            pr.first = (*p).first;
            pr.second = min(pr.second, (*p).second);
          }
        }
        if (pr.second == INT_MAX)
          continue;
        while (pr.second != 0) {
          string s (1, pr.first);
          result.push_back(s);
          pr.second--;
        }
      }

      return result;
      }
};
