/**
 *      file    :  2_addTwoNum.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 30 00:23:02
 *      lastMod :  Fri Oct 30 00:23:02 2020
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

      ListNode *head = new ListNode();
      ListNode *phead = head;
      int carry = 0;

      if (l1 == NULL || l2 == NULL)
        return NULL;

      while (head != NULL) {

        int sum = 0;

        if (l1 != NULL)
          sum += l1->val;
        if (l2 != NULL)
          sum += l2->val;

        sum += carry;
        int v = sum % 10;
        head->val = v;
        carry = sum/10;

        if (l1 != NULL)
          l1 = l1->next;
        if (l2 !=NULL)
          l2 = l2->next;

        if ((l1 == NULL && l2 == NULL) && carry == 0) {
          head->next = NULL;
        }
        else
          head->next = new ListNode();

        head = head->next;
      }

      return phead;
    }
};
