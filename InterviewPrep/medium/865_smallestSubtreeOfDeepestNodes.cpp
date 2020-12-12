/**
 *      file    :  865_smallestSubtreeOfDeepestNodes.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 12 15:16:16
 *      lastMod :  Sat Dec 12 15:16:16 2020
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
    int deepest = 0;
    TreeNode* result;
    int helper(TreeNode* root, int depth) {

      cout << "level is " << depth << endl;
      if (root == NULL) {
        deepest = max(deepest, depth);
        return depth;
      }

      int left = helper(root->left, depth+1);
      int right = helper(root->right, depth+1);

      if (left == deepest && right == deepest) {
        result = root;
      }

      return max(left, right);
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
      helper(root, 0);
      return result;
    }
};
