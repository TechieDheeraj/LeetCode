/**
 *      file    :  513_findBottomLeftTreeVal.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 16:05:53
 *      lastMod :  Sun Nov  1 16:05:53 2020
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
    int findBottomLeftValue(TreeNode* root) {

      int num = 0;
      queue<TreeNode*> q;

      if (root == NULL)
        return 0;

      q.push(root);

      while (!q.empty()) {
        TreeNode *tmp = q.front();
        q.pop();

        if (tmp->left == NULL && tmp->right == NULL && q.empty())
          return tmp->val;

        if (tmp->right != NULL)
          q.push(tmp->right);

        if (tmp->left != NULL)
          q.push(tmp->left);
      }
      return 0;
    }
};
