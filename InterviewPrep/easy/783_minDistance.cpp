/**
 *      file    :  783_minDistance.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 12 03:35:51
 *      lastMod :  Thu Nov 12 03:35:51 2020
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

    void d(TreeNode* root,int v) {

      if (root == NULL)
        return;

      d(root->left, v);
      mine = min(mine, abs(v-root->val));
      d(root->right, v);
    }

    int minDiffInBST(TreeNode* root) {

      if (root == NULL)
        return 0;

      d(root->left, root->val);
      d(root->right, root->val);

      minDiffInBST(root->left);
      minDiffInBST(root->right);

      return mine;
    }
};
