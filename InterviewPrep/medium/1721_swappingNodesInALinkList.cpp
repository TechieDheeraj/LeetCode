/**
 *      file    :  1721_swappingNodesInALinkList.cpp
 *      author  :  techiedheeraj
 *      created :  2021 Jan 10 15:45:45
 *      lastMod :  Sun Jan 10 15:45:45 2021
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
    ListNode* swapNodes(ListNode* head, int k) {

      ListNode* p1 = nullptr;
      ListNode* p2 = nullptr;
      ListNode* n1 = nullptr;

      for (p1 = head; p1!=nullptr; p1=p1->next) {
        if(p2 != nullptr) p2=p2->next;
        if (--k == 0) {
          n1 = p1;
          p2 = head;
        }
      }
      swap(n1->val, p2->val);
      return head;
    }
  /*
    ListNode* swapNodes(ListNode* head, int k) {
      if (head == NULL)
        return NULL;
      ListNode* tmp = head;
      unordered_map<int, ListNode*>hm;

      int c = 1;
      int count = 1;

      while(tmp != NULL) {
        hm[c++] = tmp;
        tmp=tmp->next;
        if (count == k) {
          count = 1;
        }
        count++;
      }
      int sind = k;
      int eind = c-k;
      if (sind != eind) {
        auto startv = hm[sind];
        auto endv = hm[eind];
        startv->val ^= endv->val;
        endv->val ^= startv->val;
        startv->val ^= endv->val;
      }

      return head;
    }
    */
};
