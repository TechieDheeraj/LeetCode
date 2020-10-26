/**
 *      file    :  234_palindrome_linkedList.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 27 00:40:52
 *      lastMod :  Tue Oct 27 00:40:52 2020
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
    ListNode* reverseList(ListNode *head) {

      ListNode *curr = head;
      ListNode *tmp = NULL;
      ListNode *prev = NULL;

      while (curr != NULL) {
        tmp = curr->next;
        curr->next=prev;
        prev = curr;
        curr = tmp;
      }
      return prev;
    }

    bool isPalindrome(ListNode* head) {

      if (head == NULL || head->next == NULL) return true;
      ListNode *slow = head;
      ListNode *fast = head;

      while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
      }

      slow->next = reverseList(slow->next);
      slow = slow->next;

      while (slow != NULL) {
        if (head->val != slow->val)
          return false;

        slow = slow->next;
        head = head->next;
      }

      return true;

      /*
      ListNode *phead = head;
      stack<int>st;

      if (head == NULL)
        return true;

      while (phead != NULL) {
        st.push(phead->val);
        phead = phead->next;
      }

      while (head != NULL) {
        if (st.top() != head->val)
          return false;

        st.pop();
        head = head->next;
      }

      return true;
      */
    }
};
