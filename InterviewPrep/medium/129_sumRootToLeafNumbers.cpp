/**
 *      file    :  129_sumRootToLeafNumbers.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 12 16:58:18
 *      lastMod :  Sat Dec 12 16:58:18 2020
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
    void helper(TreeNode* node, string prev) {
      if (node==NULL)
        return;

      if (node->left == NULL && node->right == NULL) {
        result+= stoi(prev+to_string(node->val));
      }

      helper(node->left, prev+to_string(node->val));
      helper(node->right, prev+to_string(node->val));

    }
    int sumNumbers(TreeNode* root) {
      helper(root, "");
      return result;
    }
};
