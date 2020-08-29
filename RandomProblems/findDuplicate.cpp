// solved by Techie Dheeraj
// https://leetcode.com/problems/find-the-duplicate-number

/*

This Algorithm is based on Floyd Marshell Algorithm which is also used in finding loop in Linklist

Some Resources to Understand :

1. https://leetcode.com/problems/find-the-duplicate-number/discuss/72846/My-easy-understood-solution-with-O(n)-time-and-O(1)-space-without-modifying-the-array.-With-clear-explanation.

2. https://medium.com/@tuvo1106/the-tortoise-and-the-hare-floyds-algorithm-87badf5f7d41

3. https://keithschwarz.com/interesting/code/?dir=find-duplicate

4. https://en.wikipedia.org/wiki/Cycle_detection

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0], fast = nums[nums[0]];
        
        if (nums.size() == 0)
            return 0;
        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        
        fast = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};
