/**
 *      file    :  103_zigZagLevelOrder.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 08 00:39:23
 *      lastMod :  Sun Nov  8 00:39:23 2020
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
/*
struct TNode {
  int level;
  struct TreeNode *node;
};
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> result;
      queue<TreeNode*>q;

      int l = 0;

      if (root == NULL)
        return {};

      q.push(root);

      while(!q.empty()) {
        int sz = q.size();

        vector<int> in(sz);

        for (int i= 0; i < sz; ++i) {
          TreeNode *tmp = q.front();
           q.pop();

          if(l == 0) {
            in[i] = tmp->val;
          }
          else
            in[sz-i-1] = tmp->val;

          if (tmp->left != NULL)
            q.push(tmp->left);
          if (tmp->right != NULL)
            q.push(tmp->right);

        }
        l = !l;
        result.push_back(in);
      }

      return result;
    }
