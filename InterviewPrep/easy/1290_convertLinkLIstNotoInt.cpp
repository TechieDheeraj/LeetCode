/**
 *      file    :  1290_convertLinkLIstNotoInt.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 28 10:23:09
 *      lastMod :  Wed Oct 28 10:23:09 2020
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
    int getDecimalValue(ListNode* head) {

      int result = 0;

      while (head != NULL) {

        result |= head->val;
        if (head->next == NULL)
          break;
        result <<= 1;

        head = head->next;
      }

      return result;
    }
};
