/**
 *      file    :  144_PreOrderTraveral.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 04 20:59:58
 *      lastMod :  Wed Nov  4 20:59:58 2020
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
   // vector<int> result;

    vector<int> preorderTraversal(TreeNode* root) {

      vector<int> result;
      if (root == NULL)
        return {};

      stack<TreeNode*> st;

      while (root || !st.empty()) {
        while (root) {
          st.push(root);
          result.push_back(root->val);
          root = root->left;
        }
        root = st.top();
        st.pop();
        root = root->right;
      }

      /*
      result.push_back(root->val);

      preorderTraversal(root->left);
      preorderTraversal(root->right);
      */

      return result;
    }
};
