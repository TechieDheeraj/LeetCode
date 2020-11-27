/**
 *      file    :  226_inverBinaryT.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 28 00:55:44
 *      lastMod :  Sat Nov 28 00:55:44 2020
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
    TreeNode* invertTree(TreeNode* root) {

      if (root == NULL)
        return root;

      queue<TreeNode *> q;
      TreeNode *phead = root;
      q.push(root);

      while (!q.empty()) {
        TreeNode* tmp = q.front(); q.pop();
        if (tmp == NULL)
          continue;
        if (tmp->left == NULL && tmp->right == NULL && q.empty())
          break;
        if (tmp->right != NULL && tmp->left != NULL) {
          auto t = tmp->right;
          tmp->right = tmp->left;
          tmp->left = t;
          q.push(tmp->left);
          q.push(tmp->right);
        }
        else {
          if (tmp->right == NULL) {
        //    cout << "processing node " << tmp->val << endl;
         //   cout << "node " << tmp->left  << ", " << tmp->right << endl;
            auto t = tmp->left;
            tmp->left = nullptr;
            tmp->right = t;
            q.push(tmp->right);
          }
          else if (tmp->left == NULL) {
          //  cout << "processing node " << tmp->val << endl;
           // cout << "node " << tmp->left  << ", " << tmp->right << endl;
            auto t = tmp->right;
            tmp->right = nullptr;
            tmp->left = t;
            q.push(tmp->left);
          }
        }
      }
      return phead;
    }
};
