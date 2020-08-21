// https://leetcode.com/problems/remove-element

class Solution {
	public:
		int removeElement(vector<int>& nums, int val) {
			int arrIdx = 0;
			int size = nums.size();

			for (int i = 0; i < size; ++i) {
				if (nums[i] != val) {                
					if (arrIdx != i) {
						nums[arrIdx] ^= nums[i];
						nums[i] ^= nums[arrIdx];
						nums[arrIdx] ^= nums[i];
					}
					arrIdx++;
				}        
			}
			return arrIdx;
		}
};
