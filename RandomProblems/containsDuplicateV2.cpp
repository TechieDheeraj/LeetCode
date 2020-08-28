// solved by Techie Dheeraj
// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        
        unordered_map<int, vector<int> > hashMap; // Can avoid making list of indices as atmost k is been asked, Just update the latest index could solve prob.

        for (int i = 0; i< size; ++i ) {
            if (hashMap.find(nums[i]) == hashMap.end()) {
                hashMap[nums[i]].push_back(i); 
                }
            else {
                auto j = hashMap.find(nums[i]);
                for (int l = 0;  l < (j->second).size(); ++l) {
                    if (abs(j->second[l] - i) <= k)
                            return true;
                }
                j->second.push_back(i);
            }
        }
       /* for (int i = 0 ; i < size; ++i) {
            for (int j = i+1; j < size; ++j) {
                if (nums[i] == nums[j] && (j-i) <= k) {
                    return true;
                }
            }
        }
        */
        return false;
    }
};
