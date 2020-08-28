// solved by Techie Dheeraj
// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int size = nums.size();
        if (size == 0)
            return 0;
        int maxCount = 2;
        int arrIdx = 1;
        
        int x=nums[0];
        maxCount--; // 1
        
        for (int i=1; i < size; ++i) {
           if (x == nums[i] && maxCount != 0) {
               nums[arrIdx] = nums[i];
               arrIdx++;
               maxCount--;
               continue;
           }
           else {
                if (x < nums[i]) {
                    nums[arrIdx] = nums[i];
                    arrIdx++;
                    x = nums[i];
                    maxCount = 1;
                }    
           }
        }
        return arrIdx;
    }
};
