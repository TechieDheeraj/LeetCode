/**
 *      file    :  102_LevelOrderTraversal.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 05 00:15:03
 *      lastMod :  Thu Nov  5 00:15:03 2020
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
    vector<vector<int>> levelOrder(TreeNode* root) {

      queue<TreeNode*>q;
      vector<vector<int>> result;
      vector<int>tmp;

      if (root == NULL)
        return {};

      q.push(root);

      while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; ++i) {
          TreeNode *t = q.front();
          tmp.push_back(t->val);

          if (t->left != NULL)
            q.push(t->left);
          if (t->right != NULL)
            q.push(t->right);

          q.pop();
        }

        result.push_back(tmp);
        tmp.resize(0);
      }
      return result;
    }
};
