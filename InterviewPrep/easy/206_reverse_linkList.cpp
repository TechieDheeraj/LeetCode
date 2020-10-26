/**
 *      file    :  206_reverse_linkList.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 26 23:34:50
 *      lastMod :  Mon Oct 26 23:34:50 2020
**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

      /* Using three pointers */
      /*
      ListNode *curr = head;
      ListNode *prev = NULL;
      ListNode *tmp = NULL;

      while (curr != NULL) {
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
      }

      return prev;
      */
      /* Using two pointers */

      ListNode *curr = head;
      ListNode *prev = NULL;

      while (curr != NULL) {
        curr->next = (ListNode*) ((uintptr_t)curr->next ^ (uintptr_t)prev);
        prev = (ListNode*)((uintptr_t)curr->next ^ (uintptr_t)prev);
        curr->next = (ListNode*)((uintptr_t)curr->next ^ (uintptr_t)prev);

        curr = (ListNode*)((uintptr_t)curr ^ (uintptr_t)prev);
        prev = (ListNode*)((uintptr_t)curr ^ (uintptr_t)prev);
        curr = (ListNode*)((uintptr_t)curr ^ (uintptr_t)prev);
      }
      return prev;
    }
};
