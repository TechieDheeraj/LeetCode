/**
 *      file    :  112_pathSum.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 17:04:19
 *      lastMod :  Sun Nov  1 17:04:19 2020
**/

class Solution {
public:
    bool has(TreeNode *root ,int sum) {
      if (!root) return false;

      sum-=root->val;
      if (root->left == NULL && root->right ==NULL && sum == 0)
        return true;

      return has(root->left, sum) || has(root->right, sum);
    }

    bool hasPathSum(TreeNode* root, int sum) {


      if (root == NULL)
        return 0;

      return has(root, sum);
    }
};
