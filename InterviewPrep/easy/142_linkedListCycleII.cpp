/**
 *      file    :  142_linkedListCycleII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 28 01:06:47
 *      lastMod :  Wed Oct 28 01:06:47 2020
**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

      ListNode *slow = head;
      ListNode *fast = head;

      do {

        if (fast == NULL || fast->next == NULL)
          return NULL;

        slow = slow->next;
        fast = fast->next->next;

      } while (slow != fast);

      ListNode *phead = head;

      while (phead != slow) {
        phead = phead->next;
        slow = slow->next;
      }

      return phead;

      /*
      ListNode *phead = head;
      unordered_set<ListNode*> hashSet;

      while(phead!= NULL) {
        if (hashSet.find(phead) == hashSet.end())
          hashSet.insert(phead);
        else
          return phead;

        phead = phead->next;
      }

      return NULL;
      */
    }
};
