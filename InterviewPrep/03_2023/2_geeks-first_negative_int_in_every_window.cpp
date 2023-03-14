/**
 *      file    :  2_first_negative_int_in_every_window.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 14 12:29:15 
 *      lastMod :  Tue Mar 14 12:29:15 2023 
 **/

// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/0

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K)

{
    queue<long long int >q;
    vector<long long> res;
    long long int n = N;
    long long int j = 0;
    long long int i = 0;
    while (j < n) {
        if (j-i+1 < K) {
            if (A[j] < 0) {
                q.push(A[j]);
            }
            j++;
            continue;
        }
        if (j-i+1 == K) {
            if (A[j] < 0) {
                q.push(A[j]);
            }
            long long int elem = 0;
            if (!q.empty() ) {
              elem = q.front();
            }
            res.push_back(elem);
        }
        if (A[i] == q.front()) {
          q.pop();
        }
        i++;
        j++;
    }
    return res;
}
