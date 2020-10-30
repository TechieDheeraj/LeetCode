/**
 *      file    :  160_intersectionOfTwoLinkedList.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 31 00:36:14
 *      lastMod :  Sat Oct 31 00:36:14 2020
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

      ListNode *p1 = headA;
      ListNode *p2 = headB;

      if (p1 == NULL || p2 == NULL)
        return NULL;

      while(p1!= NULL && p2!= NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        if (p1 == p2) return p1;

        if(p1==NULL)
          p1 = headB;
        if(p2==NULL)
          p2 = headA;

      }
      return p1;

      /*
      unordered_set<ListNode*> hashSet;

      while (headA != NULL) {
        if (hashSet.find(headA) == hashSet.end())
          hashSet.insert(headA);

        headA = headA->next;
      }

      while (headB != NULL) {
        if (hashSet.find(headB) != hashSet.end())
          return headB;
        headB = headB->next;
      }
     return NULL;
     */
    }
};
