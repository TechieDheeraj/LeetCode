/**
 *      file    :  110_BalancedBinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 11 02:10:59
 *      lastMod :  Wed Nov 11 02:10:59 2020
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

    /* This is Bottom-Up approach
     */

    int hbalanced(TreeNode *root) {

      int lh = 0;
      int rh = 0;

      if (root == NULL)
        return 0;

      lh = hbalanced(root->left);
      if (lh == -1) return -1;
      rh = hbalanced(root->right);
      if (rh == -1) return -1;

      if (abs(lh-rh) >1) return -1;
      return max(lh, rh)+1;
    }

    bool isBalanced(TreeNode* root) {

      if (root == NULL)
        return true;

     return hbalanced(root) != -1;

 /*
  * This is Top-down approach
  *
    int hbalanced(TreeNode *root) {

      int lh = 0;
      int rh = 0;

      if (root == NULL)
        return 0;

      lh = hbalanced(root->left);
      rh = hbalanced(root->right);

      return max(lh, rh) +1;
    }

    bool isBalanced(TreeNode* root) {

      if (root ==NULL)
        return true;

      int lh = hbalanced(root->left);
      int rh = hbalanced(root->right);
      return abs(lh-rh) <=1 && isBalanced(root->left) && isBalanced(root->right);
      */
    }
};
