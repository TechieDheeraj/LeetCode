/**
 *      file    :  3_pepcoding_get_maze_paths.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 29 14:26:52 
 *      lastMod :  Wed Mar 29 14:26:52 2023 
 **/

// Implemented: https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-paths-official/ojquestion
#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    cout << dr << endl;
    if (sr == dr && dc == sc) {
        return {""};
    }
    
    vector<string>paths1;
    vector<string>paths2;
    if (sr < dr) {
        paths1 = getMazePaths(sr+1, sc, dr, dc); // vertical wise
    }

    if (sc < dc) {
        paths2 = getMazePaths(sr, sc+1, dr, dc); // horizontal wise
    }
    
    vector<string>res;
    for (auto &i: paths1) {
        res.push_back('v' + i);
    }
    for (auto &i: paths2) {
        res.push_back('h' + i);
    }
    return res;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}
