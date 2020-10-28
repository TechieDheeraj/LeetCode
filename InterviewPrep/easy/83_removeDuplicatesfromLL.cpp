/**
 *      file    :  83_removeDuplicatesfromLL.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 29 00:59:54
 *      lastMod :  Thu Oct 29 00:59:54 2020
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
    ListNode* deleteDuplicates(ListNode* head) {

      ListNode *prev = NULL;
      ListNode *tmp = head;
      ListNode *cop = NULL;

      if (head == NULL || head->next == NULL)
        return head;

      prev = head;
      tmp = tmp->next;

      while (tmp != NULL) {
        if (tmp->val == prev->val) {
          cop = tmp->next;
          prev->next = cop;
          tmp = tmp->next;
          continue;
        }

        prev = tmp;
        tmp = tmp->next;
      }
      return head;
    }
};
