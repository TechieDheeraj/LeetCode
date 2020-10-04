// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> results;
        unordered_map<int, int> hashMap;
        int size = nums.size();
        int num = 0;
        std::unordered_map<int, int>::iterator got;

        for (int i = 0; i < size; ++i) {
            num = target-nums[i];
            got = hashMap.find(num);
            if (got == hashMap.end()) {
                hashMap[nums[i]] = i;
            }
            else
                return {got->second, i};
        }
        return {};
    }
};
