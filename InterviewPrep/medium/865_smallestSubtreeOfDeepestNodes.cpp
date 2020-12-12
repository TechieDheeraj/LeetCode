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
    TreeNode* result = NULL; 
    int helper(TreeNode* node, int depth) {
      
      if (node == NULL) {
        deepest = max(depth, deepest);  
        return depth;
      }
      auto left = helper(node->left, depth+1);
      auto right = helper(node->right, depth+1);
      
      if (left == deepest && right == deepest)
        result = node;
      
      return max(left, right);
    }
  
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
      helper(root, 0);
      return result;
    }
};
