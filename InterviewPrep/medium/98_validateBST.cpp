/**
 *      file    :  98_validateBST.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 10 00:26:20
 *      lastMod :  Tue Nov 10 00:26:20 2020
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
    long int t = (long int)INT_MIN - 1;

    bool isValidBST(TreeNode* root) {

      if (root == NULL)
        return true;

      bool j = isValidBST(root->left);

      if (!j || root->val <= t)
        return false;

      t = root->val;

      bool k = isValidBST(root->right);

      return (j && k);
    }
};
