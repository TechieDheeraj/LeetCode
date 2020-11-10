/**
 *      file    :  104_maxDepthOfBinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 11 02:10:11
 *      lastMod :  Wed Nov 11 02:10:11 2020
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
  int maxe = INT_MIN;
    void md(TreeNode *root, int sum){

      if (root->left == NULL && root->right == NULL) {
        maxe = max(maxe, sum);
        return;
      }
      if (root->left != NULL)
        md(root->left, sum+1);
      if (root->right != NULL)
        md(root->right, sum+1);
    }

    int maxDepth(TreeNode* root) {
      if (root == NULL)
        return 0;

      md(root, 1);
      return maxe;

    }
};
