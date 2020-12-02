#! /usr/bin/env python3

###
 #      file    :  382_linkLIstRandomNode.py
 #      author  :  techiedheeraj
 #      created :  2020 Dec 02 23:33:38
 #      lastMod :  Wed Dec  2 23:33:38 2020
###

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def __init__(self, head: ListNode):
        """
        @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node.
        """

        self.range=[]
        while head:
          self.range.append(head.val)
          head = head.next


    def getRandom(self) -> int:
        """
        Returns a random node's value.
        """
        p = int(random.random() * len(self.range))
        return self.range[p]

