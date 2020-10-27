/**
 *      file    :  203_removeLinkedListElements.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 27 23:53:48
 *      lastMod :  Tue Oct 27 23:53:48 2020
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
    ListNode* removeElements(ListNode* head, int val) {
      /*
      ListNode* cur = head;
      ListNode* pre = NULL;

      while(cur and cur->val ==val){
          head = cur->next;
          cur = head;
      }

      while(cur){
          while(cur and cur->val != val){
              pre = cur;
              cur = cur->next;
          }
          if(cur == NULL)
              return head;

          pre->next = cur->next;
          cur = pre->next;

      }
      return head;
      */

      ListNode *tmp = NULL;
      ListNode *prev = NULL;

      if (head == NULL) return NULL;
      while (head != NULL && head->val == val) {
        head = head->next;
      }
      /*
      if (head->next != NULL)
        phead = head->next;
      else
        return head;
      */
      ListNode *phead = head;

      while (phead != NULL) {
        if (phead->val == val) {
          prev->next = phead->next;
          phead = phead->next;
          continue;
        }

        prev = phead;
        phead = phead->next;
      }

      return head;

    }
};
