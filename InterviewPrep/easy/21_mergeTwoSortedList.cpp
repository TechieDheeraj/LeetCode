/**
 *      file    :  21_mergeTwoSortedList.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 31 00:17:11
 *      lastMod :  Sat Oct 31 00:17:11 2020
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

     ListNode *head = new ListNode();
     ListNode *phead = head;


      if (l1 == NULL && l2 == NULL)
        return NULL;

      while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
          head->next=l1;
          l1 = l1->next;
        }
        else {
          head->next=l2;
          l2 = l2->next;
        }
        head = head->next;
      }
      head->next = l1 == NULL ? l2 : l1;

      return phead->next;
    }
};
