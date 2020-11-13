/**
 *      file    :  965_UnivaluesBT.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 13 01:48:22  IST
 *      lastMod :  Friday 13 November 2020 01:48:22 PM IST
**/

class Solution {
public:
    bool checkVal(TreeNode* root, int val) {
      if (root==NULL)
        return true;

      if (root->val != val)
        return false;

      return checkVal(root->left, val) && checkVal(root->right, val);
    }

    bool isUnivalTree(TreeNode* root) {
      return checkVal(root, root->val);

    }
};
