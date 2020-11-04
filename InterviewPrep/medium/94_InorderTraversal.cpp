/**
 *      file    :  94_InorderTraversal.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 04 20:45:27
 *      lastMod :  Wed Nov  4 20:45:27 2020
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
    //vector<int>result;

    vector<int> inorderTraversal(TreeNode* root) {

      vector<int>result;
      stack<TreeNode*>st;

      if (root == NULL)
        return {};

      while (root || !st.empty()) {
        while (root) {
          st.push(root);
          root = root->left;
        }

        root = st.top();
        st.pop();
        result.push_back(root->val);
        root = root->right;
      }
      return result;

      /*
      if (root == NULL)
        return {};

      inorderTraversal(root->left);
      result.push_back(root->val);
      inorderTraversal(root->right);

      return result;
      */
    }
};
