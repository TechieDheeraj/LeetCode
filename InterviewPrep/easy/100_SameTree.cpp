/**
 *      file    :  100_SameTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 13 01:46:22  IST
 *      lastMod :  Friday 13 November 2020 01:46:22 PM IST
**/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

      if (p==NULL && q == NULL)
        return true;
      if (p==NULL || q== NULL)
        return false;

      return p->val==q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
