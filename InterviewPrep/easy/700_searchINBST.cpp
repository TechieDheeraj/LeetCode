/**
 *      file    :  700_searchINBST.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 05 01:19:01
 *      lastMod :  Thu Nov  5 01:19:01 2020
**/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
      if (root == NULL)
        return NULL;

      while (root != NULL && root->val!=val)
        root = (root->val > val) ? root->left : root->right; 
     /* 
      if (root->val == val)
        return root;

      if (val < root->val && root->left != NULL)
        root = searchBST(root->left, val);
      else if (val > root->val && root->right != NULL)
        root = searchBST(root->right, val);
      else
        return NULL;

      */
      return root;
    }
};
