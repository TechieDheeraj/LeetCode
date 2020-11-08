/**
 *      file    :  563_BinaryTreeTilt.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 08 23:18:18
 *      lastMod :  Sun Nov  8 23:18:18 2020
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
    int result = 0;
    int calSum(TreeNode *root) {
      if (root == NULL)
        return 0;

      int lsum = calSum(root->left);
      int rsum = calSum(root->right);

      result += abs(lsum-rsum);
      return lsum + rsum + root->val;
    }

    int findTilt(TreeNode* root) {
      calSum(root);
      return result;
    }
};
