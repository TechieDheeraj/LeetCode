// solved by Techie Dheeraj
// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;
        
        for (auto i : nums) {
            if (hashSet.find(i) == hashSet.end()) {
                hashSet.insert(i);
            }        
            else 
                return true;
        }
        return false;
    }
};
