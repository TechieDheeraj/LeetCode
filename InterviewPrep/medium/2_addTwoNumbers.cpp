/**
 *      file    :  2_addTwoNumbers.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 29 01:29:11 
 *      lastMod :  Tue 29 Jun 01:29:11 2021 
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

      int c = 0;
      int s = 0;
      ListNode* head=l1;
      ListNode* prev=NULL;

      while(l1 != NULL && l2 != NULL) {
        s = l1->val+l2->val+c;
        if (s >= 10) {
          c = s/10;
          s%=10;
        } else {
            c = 0;
          }
        l1->val = s;
        prev = l1;
        l1 = l1->next;
        l2 = l2->next;
      }
      while(l1 != NULL) {
        s = l1->val+c;

        if (s >= 10) {
          c = s/10;
          s %= 10;
        } else {
          c = 0;
        }

        l1->val=s;
        if (l1->next == NULL && c != 0)
          l1->next=new ListNode(0);

        l1 = l1->next;
      }
      while(l2 != NULL) {
        s = l2->val+c;

        if (s >= 10) {
          c = s/10;
          s %= 10;
        } else {
          c = 0;
        }

        prev->next = new ListNode(s);
        if (l2->next == NULL && c!= 0)
          l2->next=new ListNode(0);
        l2 = l2->next;
        prev = prev->next;
      }
      if (c != 0) {
        prev->next = new ListNode(c);
      }
      return head;
    }
};
