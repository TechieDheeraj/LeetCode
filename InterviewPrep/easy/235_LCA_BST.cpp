/**
 *      file    :  235_LCA_BST.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 13 02:41:47
 *      lastMod :  Fri Nov 13 02:41:47 2020
**/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

      if (root == p || root == q || root== NULL) return root;
      TreeNode* left=NULL;
      TreeNode* right = NULL;
      if (p->val < root->val || q->val < root->val)
         left = lowestCommonAncestor(root->left, p, q);
      if (p->val > root->val || q->val > root->val)
         right = lowestCommonAncestor(root->right, p, q);

      return left && right ? root : right ? right : left;

    }
  /*
    vector<vector<TreeNode*>>d;
    void makepath(TreeNode* root, TreeNode* node) {

      vector<TreeNode*>res;
      while(root!= NULL) {

        //cout << " >> pushing " << root->val << endl;
        res.push_back(root);
        if (root==node) {
          break;
        }

        if (root->val > node->val)
          root = root->left;
        else
          root = root->right;
      }

      d.push_back(res);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

      makepath(root, p);
      makepath(root, q);

      vector<TreeNode*>f = d[0];
      vector<TreeNode*>s = d[1];

      int i = 0;
      TreeNode *min;

      while(i < f.size() && i < s.size()) {
        TreeNode *a = f[i];
        TreeNode *b = s[i];

        //cout << a->val << ", " << b->val << endl;
        //if (f[i]->val == d[i].val)
        if (a->val == b->val)
          min = f[i];

        ++i;
      }

      return min;
    }
    */
};
