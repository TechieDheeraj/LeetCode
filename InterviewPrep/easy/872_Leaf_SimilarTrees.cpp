/**
 *      file    :  872_Leaf_SimilarTrees.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 07 00:39:34
 *      lastMod :  Sat Nov  7 00:39:34 2020
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
 /*
    void DFS(TreeNode *root, vector<int>&v) {
      if (root== NULL)
        return;

      if (!(root->left || root->right))
        v.push_back(root->val);

      DFS(root->left, v);
      DFS(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int> v1;
      vector<int> v2;

      DFS(root1, v1);
      DFS(root2, v2);

      return v1 == v2;
    }
    */

    int DFS(stack<TreeNode*>&s) {

      while (true) {
        TreeNode* tmp = s.top();
        s.pop();

        if (tmp->left != NULL)
          s.push(tmp->left);
        if (tmp->right != NULL)
          s.push(tmp->right);

        if (tmp->left == NULL && tmp->right == NULL)
          return tmp->val;
      }
    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      stack<TreeNode*> s1;
      stack<TreeNode*> s2;

      s1.push(root1);
      s2.push(root2);

      while (!s1.empty() && !s2.empty()) {

        if (DFS(s1) != DFS(s2))
          return false;
      }
      return s1.empty() && s2.empty();
    }
};
