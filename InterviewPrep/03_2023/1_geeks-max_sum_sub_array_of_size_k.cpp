/**
 *      file    :  1_geeks-max_sum_sub_array_of_size_k.cpp 
 *      author  :  techiedheeraj
 *      created :  2023 Mar 14 12:11:54 
 *      lastMod :  Tue Mar 14 12:11:54 2023 
 **/

//https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/0

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int n){
        // code here 
        long res = INT_MIN;
        long sum = 0;
        for (int i = 0, j = 0;j < n; ++i, ++j) {
            while(j-i+1 <= K) {
                sum += Arr[j];
                j++;
                res = max(res, sum);
                continue;
            }
            sum = sum+Arr[j]-Arr[i];
            res = max(res, sum);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}
