/**
 *      file    :  236_LCA_BT.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 14 01:44:59
 *      lastMod :  Sat Nov 14 01:44:59 2020
**/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

      if (root == p || root==q || root==NULL) return root;
      TreeNode *left = lowestCommonAncestor(root->left, p, q);
      TreeNode *right = lowestCommonAncestor(root->right, p, q);

      return left && right ? root : left ? left : right;
}
};
