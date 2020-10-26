/**
 *      file    :  876_middle_link_list.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 27 01:01:42
 *      lastMod :  Tue Oct 27 01:01:42 2020
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
    ListNode* middleNode(ListNode* head) {

      ListNode *slow = head;
      ListNode *fast = head;

      //while (fast->next != NULL && fast->next->next != NULL) { // for even first mid element
      while (fast != NULL && fast->next != NULL) { // for even second mid element
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;
    }
};
