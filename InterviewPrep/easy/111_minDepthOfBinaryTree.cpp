/**
 *      file    :  111_minDepthOfBinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 11 02:09:15
 *      lastMod :  Wed Nov 11 02:09:15 2020
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
    int mine = INT_MAX;

    void md(TreeNode* root, int sum) {

      if (root->left == NULL && root->right == NULL) {
        mine = min(mine, sum);
        return;
      }

      if (root->left != NULL)
        md(root->left, sum+1);
      if (root->right != NULL)
        md(root->right, sum+1);
    }

    int minDepth(TreeNode* root) {
      if (root == NULL)
        return 0;

      md(root, 1);
      return mine;
    }
};
