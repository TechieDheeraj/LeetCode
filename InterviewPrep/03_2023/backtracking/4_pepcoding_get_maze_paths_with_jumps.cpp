/**
 *      file    :  4_pepcoding_get_maze_paths_with_jumps.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 30 12:11:22 
 *      lastMod :  Thu Mar 30 12:11:22 2023 
 **/

// Implemented:  https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-path-with-jumps-official/ojquestion
#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {
  //Write your code here
  if (sc == dc && sr == dr) {
      return {""};
  }
  
  vector<string>res;
  
  for (int colj = 1; colj <= dc-sc; ++colj) {
      vector<string>hpaths = get_maze_paths(sr, sc+colj, dr, dc);
      for (auto path: hpaths) {
          res.push_back('h'+to_string(colj)+path);
      }
  }
  for (int rowj = 1; rowj <= dr-sr; ++rowj) {
      vector<string>vpaths = get_maze_paths(sr+rowj, sc, dr, dc);
      for (auto path: vpaths) {
          res.push_back('v'+to_string(rowj)+path);
      }
  }
  for (int diagj = 1; diagj <= dr-sr && diagj <= dc-sc; ++diagj) {
      vector<string>dpaths = get_maze_paths(sr+diagj, sc+diagj, dr, dc);
      for (auto path: dpaths) {
          res.push_back('d'+to_string(diagj)+path);
      }
  }
  return res;
}

void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}
