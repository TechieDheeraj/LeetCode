// solved by Techie Dheeraj
// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
     /*   sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i = 0; i < t.size(); ++i) {
            if (i < s.size() && t[i] != s[i])
                return t[i];
            else if (i >= s.size())
                return t[i];
        }
        return '\0';
        */
       
        /*
        unordered_map< int, int> hashMap ;
        
        for (auto i : s) 
            hashMap[i]++;
        
        for (auto i : t) {
            if (hashMap.find(i) == hashMap.end())
                return i;
            else {
                if (hashMap[i] < 1)
                    return i;
                hashMap[i]--;
            }
        }
        */
        
        unsigned long long int sumS ;
        unsigned long long int sumT ;
        
        for (auto i : s) 
            sumS += ( unsigned long long int) i;
        for (auto j : t) 
            sumT += (int) j;
        
        return ( unsigned long long int) (sumT - sumS);
    }
};
