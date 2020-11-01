/**
 *      file    :  199_binaryTreeSideView.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 20:33:11
 *      lastMod :  Sun Nov  1 20:33:11 2020
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
  enum state{NULLSTATE, NON_NULLSTATE};
    vector<int> rightSideView(TreeNode* root) {

      queue<TreeNode*>q;
      vector<int>result;
      state laststate = NULLSTATE;

      if (root == NULL)
        return {};

      q.push(NULL);
      q.push(root);

      while (!q.empty()) {

        TreeNode *tmp = q.front();
        q.pop();

        if (tmp == NULL) {
          laststate = NULLSTATE;

          if (!q.empty()) {
            q.push(NULL);
            continue;
          }
        }
        else {
          if (laststate == NULLSTATE) {
            result.push_back(tmp->val);
            laststate=NON_NULLSTATE;
          }
        }

        if (tmp != NULL) {
          if (tmp->right != NULL)
            q.push(tmp->right);
          if (tmp->left != NULL)
            q.push(tmp->left);
        }
      }
      return result;
    }
};
