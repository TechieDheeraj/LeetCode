/**
 *      file    :  173_BST_Iterator.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 10 15:10:37
 *      lastMod :  Thu Dec 10 15:10:37 2020
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
class BSTIterator {
public:
    queue<int>q;
    void fillq(TreeNode* root) {
      if (root == NULL)
        return;
      if (root->left != NULL)
        fillq(root->left);
      q.push(root->val);
      if (root->right != NULL)
        fillq(root->right);

      /*
      For an array of n array , first (n-1) integer are sorted? Eg: 1,2,3,5,8,4 .. what should minimum time complexity to rearrange in increasing order ??
      */

    }

    BSTIterator(TreeNode* root) {
      fillq(root);
    }

    int next() {
      int v = q.front();
      q.pop();
      return v;
    }

    bool hasNext() {
      return !q.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
