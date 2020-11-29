/**
 *      file    :  1669_mergeInBetweenLinkedList.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 29 18:37:46
 *      lastMod :  Sun Nov 29 18:37:46 2020
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

      if (list1 == NULL && list2 == NULL)
        return NULL;

      ListNode* head = list1, *f, *s;
      bool isf = false;
      bool iss = false;
      int j = 1;
      int k = 1;

      ListNode* prev = head;
      head = head->next;

      while(head != NULL) {
        if (j == a) {
          f = prev;
          isf = true;
         /* if (a==b) {
            iss = true;
            break;
          }
          */

        }
        if (k == b) {
        //  if (a != b)
            s = head->next;
         // else
         //   s=prev;

          iss = true;
        }
      /*  if (head->val == a) {
          f = prev;
          isf = true;
        }
        if (head->val == b) {
          s = head->next;
          iss = true;
        }
        */
        j+=1; k+=1;

        prev = head;
        head = head->next;
      }
      if (isf && iss) {
        f->next = list2;
        ListNode *tmp = list2;

        while (list2!= NULL) {
          tmp = list2;
          list2 = list2->next;
        }
        tmp->next = s;
      }
      return list1;
    }
};
