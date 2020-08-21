# https://leetcode.com/problems/remove-element
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        j=0
        for i in nums:
            if i != val:
                nums[j] = i
                j += 1
        return j
