/**
 *      file    :  958_checkCompletenessOfBinaryTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 12 18:11:27
 *      lastMod :  Sat Dec 12 18:11:27 2020
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
    bool isCompleteTree(TreeNode* root) {
      queue<TreeNode*>q;

      q.push(root);
      bool isEnd = false;
      while(!q.empty()) {
          TreeNode*tmp = q.front(); q.pop();

          if (tmp == NULL)
            isEnd = true;
          else {
            if(isEnd) return false;
            q.push(tmp->left);
            q.push(tmp->right);
          }
        }
      return true;
    }
};
