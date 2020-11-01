/**
 *      file    :  114_flattenBTtoLL.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 18:28:54
 *      lastMod :  Sun Nov  1 18:28:54 2020
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
  void pusharr(TreeNode *root, vector<TreeNode*>& spare) {

    if (root == NULL)
      return;
    spare.push_back(root);

    pusharr(root->left, spare);
    pusharr(root->right, spare);
  }

  void flatten(TreeNode* root) {

      vector<TreeNode*>spare;
      TreeNode *tmp = root;
      pusharr(tmp, spare);

    if (root == NULL)
      return;
    if (root->left == NULL && root->right == NULL)
      return;

      int j = 0;

      while(tmp !=NULL) {
        if (j == spare.size())
          break;
        if (tmp->left != NULL)
          tmp->left = NULL;

          tmp->right = spare[j];
        tmp = tmp->right;
        ++j;
      }
    }
};
