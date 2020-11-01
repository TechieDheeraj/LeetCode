/**
 *      file    :  997_findTheTownJudge.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 02 00:53:45
 *      lastMod :  Mon Nov  2 00:53:45 2020
**/

class Solution {
  public:
  int findJudge(int N, vector<vector<int>>& trust) {

    vector<int>in(N,0);
    vector<int>out(N,0);

    for (auto& arr : trust) {
        out[arr[0]-1]++;
        in[arr[1]-1]++;
    }

    for (int i = 0; i < out.size(); ++i) {
      if (out[i] == 0 && in[i] == N-1)
        return i+1;
    }

    return -1;
  }
};
