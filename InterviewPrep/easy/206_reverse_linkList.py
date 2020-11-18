###
 #      file    :  206_reverse_linkList.py
 #      author  :  techiedheeraj
 #      created :  2020 Nov 18 23:46:35
 #      lastMod :  Wed Nov 18 23:46:35 2020
###

#! /usr/bin/env python3

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    prev = None
    def reverseList(self, head: ListNode) -> ListNode:
      global prev
      if head is None:
        return head

      print(head.val)
      head.next, self.prev = self.prev, head.next
      head, self.prev = self.prev, head
      self.reverseList(head)
      return self.prev
