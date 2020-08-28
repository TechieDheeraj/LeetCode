// solved by Techie Dheeraj
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int size = nums.size();
        if (size == 0)
            return 0;
        int arrIdx = 1;
        int x = nums[0];
        for (int i = 1; i < size; ++i) {
           if (x < nums[i]) {
               nums[arrIdx] = nums[i];
               x = nums[i];
               arrIdx++;
           } 
       }
        return arrIdx;
    }
};
