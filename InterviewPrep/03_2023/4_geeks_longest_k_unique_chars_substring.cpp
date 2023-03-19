/**
 *      file    :  4_geeks_longest_k_unique_chars_substring.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 19 14:25:26 
 *      lastMod :  Sun Mar 19 14:25:26 2023 
 **/

//{ Driver Code Starts
//Initial template for C++


// Link: https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
//
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int res = -1;
        unordered_map<char, int> hm;
        int n = s.length();
        for (int i =0, j = 0; j<n;) {
            hm[s[j]]++;
            if (hm.size() < k) {
                j++;
            } else if (hm.size() == k) {
                res = max(res, (j-i)+1);
                j++;
            } else {
                while (hm.size() > k) {
                    hm[s[i]]--;
                    if (!hm[s[i]]) {
                        hm.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
