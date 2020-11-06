/**
 *      file    :  113_PathSumII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 07 00:20:05
 *      lastMod :  Sat Nov  7 00:20:05 2020
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
    vector<vector<int>> result;

    void countPath(TreeNode *root, int sum, vector<int>path) {

      if (root == NULL)
        return;

      path.push_back(root->val);

      if (root->left == NULL && root->right == NULL) {
        int s = 0;
        for (auto &i : path)
          s+=i;
        if (s == sum) {
          result.push_back(path);
        }
        return;
      }
      countPath(root->left, sum, path);
      countPath(root->right, sum, path);

    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
      vector<int>res;
      countPath(root, sum, res);

      return result;
    }
};
