/**
 *      file    :  107_BinaryTLevelOrderTraversal.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 09 23:36:52
 *      lastMod :  Mon Nov  9 23:36:52 2020
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

      vector<vector<int>>result;
      queue<TreeNode*>q;
      stack<vector<int>>st;

      if (root==NULL)
        return {};

      q.push(root);

      while (!q.empty()) {
        int size = q.size();
        vector<int>res;

        for (int i = 0; i < size; ++i) {
          TreeNode *tmp = q.front(); q.pop();
          res.push_back(tmp->val);

          if (tmp->left != NULL)
            q.push(tmp->left);
          if (tmp->right != NULL)
            q.push(tmp->right);
        }
        st.push(res);

        //result.insert(result.begin(), res);
      }
      while(!st.empty()) {
        auto i = st.top();
        st.pop();
        result.push_back(i);
      }

      return result;
    }
};
