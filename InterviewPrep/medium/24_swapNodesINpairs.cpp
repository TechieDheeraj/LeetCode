/**
 *      file    :  24_swapNodesINpairs.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 17 01:00:06
 *      lastMod :  Tue Nov 17 01:00:06 2020
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
    ListNode* swapPairs(ListNode* head) {
      if (head == NULL)
        return NULL;

      if (head->next != NULL) {
        ListNode*tmp = head;
        head = head->next;
        tmp->next = head->next;
        head->next = tmp;
        head->next->next = swapPairs(head->next->next);
      }
      return head;
    }
};
