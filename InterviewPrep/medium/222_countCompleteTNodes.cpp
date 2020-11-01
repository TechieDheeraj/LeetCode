/**
 *      file    :  222_countCompleteTNodes.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 15:57:20
 *      lastMod :  Sun Nov  1 15:57:20 2020
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

    TreeNode* inorderPredecessor(TreeNode *node) {

      TreeNode *prev = NULL;
      TreeNode *cop = node;

      cop = cop->left;

      if (cop->right == NULL)
        return cop;

      while (cop != NULL) {
        prev = cop;
        cop = cop->right;
        if (cop == node)
          break;
      }
      return prev;
    }

    int countNodes(TreeNode* root) {

      int count = 0;

      if (root == NULL)
        return 0;

      TreeNode *proot = root;

      while (proot != NULL) {
        if (proot->left == NULL && proot->right == NULL)
          return ++count;

        if (proot->left != NULL) {
          TreeNode *tmp = inorderPredecessor(proot);
          if (tmp->right == NULL) {
            tmp->right = proot;
            proot=proot->left;
          }
          else {
            tmp->right = NULL;
            count++;
            proot = proot->right;
          }
        }
        else if (proot->right != NULL) {
          count++;
          proot =proot->right;
        }
      }

      return count;

      /*
      int count = 0;
      if (root==NULL)
        return 0;

      count += countNodes(root->left);
      count += countNodes(root->right);

      return ++count;
      */

      /*
      queue<TreeNode*> q;
      int count = 0;

      if (root == NULL)
        return 0;
      if (root->left == NULL && root->right == NULL)
        return 1;

      q.push(root);

      while (!q.empty()) {
        count++;
        TreeNode *tmp = q.front();

        q.pop();

        if (tmp->left != NULL)
          q.push(tmp->left);

        if (tmp->right != NULL)
          q.push(tmp->right);

      }
      return count;
      */
    }
};
