/**
 *      file    :  637_AvgLevelsOfBinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 12 16:44:03
 *      lastMod :  Sat Dec 12 16:44:03 2020
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
    vector<double> averageOfLevels(TreeNode* root) {
      vector<double> result;
      queue<TreeNode*>q;

      if (root == NULL)
        return {};
      q.push(root);

      while (!q.empty()) {
        int size = q.size();

        double sum = 0;
        for (int i = 0; i < size; ++i) {
          TreeNode* tmp = q.front(); q.pop();
          sum+=tmp->val;

          if (tmp->left != NULL)
            q.push(tmp->left);
          if (tmp->right != NULL)
            q.push(tmp->right);
        }
        result.push_back(sum/size);
      }

     return result;
    }
};
