/**
 *      file    :  445_addTwoNumbersII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 08 01:41:41
 *      lastMod :  Sun Nov  8 01:41:41 2020
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

      if (l1 == NULL && l2 == NULL)
        return NULL;

      stack<int>s1;
      stack<int>s2;
      stack<int>res;

      ListNode *result = new ListNode();
      ListNode *head = result;
      int carry = 0;

      while (l1 != NULL) {
        s1.push(l1->val);
        l1 = l1->next;
      }
      while (l2 != NULL) {
        s2.push(l2->val);
        l2=l2->next;
      }

      while (!s1.empty() || !s2.empty()) {
        int p = !s1.empty() ? s1.top(): 0;
        int q = !s2.empty() ? s2.top(): 0;

        if (!s1.empty())
          s1.pop();
        if (!s2.empty())
          s2.pop();
        int d = (carry + (p+q));
        int sum = d % 10;
        carry = d / 10;
        res.push(sum);
        //result->next = new ListNode(sum);
        //result = result->next;
      }
      if (carry != 0 )
        res.push(carry);
     /*
      if (carry != 0 )
        result->next = new ListNode(carry);

      ListNode *curr = head->next;
      ListNode *prev = NULL;
      ListNode *next = NULL;

      while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
      }

      head->next = prev;

      return head->next;
      */

      while (!res.empty()) {
        int t = res.top(); res.pop();

        result->next = new ListNode(t);
        result = result->next;

      }
      return head->next;
    }
};
