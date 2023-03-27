/**
 *      file    :  1_gfg_tower_of_hanoi.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 28 00:51:00 
 *      lastMod :  Tue Mar 28 00:51:00 2023 
 **/

// Link: Implemented https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    int res = 0;
    long long toh(int N, int from, int to, int aux) {
        if (N == 0) {
            return 0;
        }
        toh(N-1, from, aux, to);
        cout << "move disk "<< N << " from rod " << from << " to rod " <<  to << endl;
        res++;
        toh(N-1, aux, to, from);
        return res;
        
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
