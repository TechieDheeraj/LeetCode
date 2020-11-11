/**
 *      file    :  530_minAbsoluteDiff.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 12 03:36:28
 *      lastMod :  Thu Nov 12 03:36:28 2020
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
    void d(TreeNode *root, int v) {

      if (root == NULL)
        return;

      d(root->left, v);
      mine = min(mine, abs(root->val-v));
      d(root->right, v);
    }

    int getMinimumDifference(TreeNode* root) {

      if (root == NULL)
        return 0;

      d(root->left, root->val);
      d(root->right, root->val);

      getMinimumDifference(root->left);
      getMinimumDifference(root->right);

      return mine;
    }
};
