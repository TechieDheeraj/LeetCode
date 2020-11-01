/**
 *      file    :  654_max_BinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 19:50:36
 *      lastMod :  Sun Nov  1 19:50:36 2020
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


    void constructTree(TreeNode *root, vector<int>&nums, int l, int r) {

     if (root == NULL)
       return;

     if (l == r) {
       root->val = nums[l];
       return;
     }

     pair <int, int> num;
     num.first = INT_MIN;
     for (int i = l; i <= r; ++i) {
       if (nums[i] > num.first) {
         num.first = nums[i];
         num.second = i;
       }
     }

     root->val = num.first;

     if (num.second > l)
       root->left = new TreeNode();

      constructTree(root->left, nums, l, num.second-1);

    if (num.second < r )
      root->right = new TreeNode();

      constructTree(root->right, nums, num.second+1, r);

    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

      TreeNode *root = new TreeNode();

      constructTree(root, nums, 0, nums.size()-1);

      return root;
    }
};
