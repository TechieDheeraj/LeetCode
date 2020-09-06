// https://www.lintcode.com/problem/rotate-string/description
// https://stackoverflow.com/questions/19316335/rotate-string-in-place-with-on

#include<bits/stdc++.h>

class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        
        int end = str.size();
        if (end == 0)
            return;
        int rot= offset % end;
        
        reverse(str.begin(), str.end());
        reverse(str.begin(), str.begin()+rot);
        
        reverse(str.begin()+rot, str.end());
    }
};
