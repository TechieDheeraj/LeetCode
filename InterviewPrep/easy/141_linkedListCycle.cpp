/**
 *      file    :  141_linkedListCycle.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 27 01:45:18
 *      lastMod :  Tue Oct 27 01:45:18 2020
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
  /* Check distance from the head node : TC:O(n2) 
    int distanceFromRoot (ListNode *head, ListNode *node) {
      ListNode *phead = head;
      int count = 0;
      
      while (phead != node) {
        count++;
        phead = phead->next;
      }
      return count;
    }
    */
    
    bool hasCycle(ListNode *head) {
      /*
      if (head == NULL) return false;
      
      ListNode *phead = head;
      int con1 = 0;
      unordered_set<int>hashSet;
      
      phead = phead->next;
      
      while (phead != NULL) {
        con1 = distanceFromRoot(head, phead);
        if(hashSet.find(con1) == hashSet.end())
          hashSet.insert(con1);
        else
          return true;
        phead = phead->next;
      }
      
      return false;
      */
      
      /* Using Slow, fast pointer */ 
      ListNode *slow = head; 
      ListNode *fast = head; 
      
      while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
          return true;
      }
      return false;
      
  /* Using hashSet to store addresses */
      /*
      unordered_set<ListNode*>hashSet;
      ListNode *phead = head;
      
      while (phead != NULL) {
        if (hashSet.find(phead) == hashSet.end())
          hashSet.insert(phead);
        else
          return true;
        phead = phead->next; 
      }
      return false;
      */
    }
};
