/**
 *      file    :  1700_NumOfStudentsUnableToEat.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 29 23:53:44
 *      lastMod :  Tue Dec 29 23:53:44 2020
 **/

class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sa) {
      /*
      queue<int>q;
      queue<int>qa;
      for (auto i : s)
        q.push(i);
      for (auto i : sa)
        qa.push(i);
        */
     /*
      while(!q.empty() || !qa.empty()) {
        auto v = q.front();

        if (!qa.contains(v)) break;
        if (v == qa.front()) {
          cout << v << endl;
          q.pop();
          qa.pop();
        }
        else {
          q.pop();
          q.push(v);
        }
      }
      */
      while (s.size() > 0 || sa.size()) {
         auto v = *s.begin();

        if (v == *sa.begin()) {
          s.erase(s.begin());
          sa.erase(sa.begin());
        }
        else {
          s.erase(s.begin());
          s.push_back(v);
          auto te = *sa.begin();
          auto it = find(s.begin(), s.end(), te);
          if (it == s.end()) break;
        }
      }

      return s.size();
    }
};
