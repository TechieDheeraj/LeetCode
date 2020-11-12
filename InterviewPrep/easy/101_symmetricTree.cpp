/**
 *      file    :  101_symmetricTree.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 13 02:40:49
 *      lastMod :  Fri Nov 13 02:40:49 2020
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
  
    bool checks(TreeNode *one, TreeNode* two) {
      
      if (one == NULL && two == NULL)
        return true;
      
      if (one == NULL || two == NULL)
        return false;
      
      return one->val == two->val && checks(one->left, two->right) && checks(one->right, two->left);
    }
  
    bool isSymmetric(TreeNode* root) {
      
      return checks(root, root);
      
      
      
      
      
  /*
    stack<int>s;
    void t1(TreeNode *root) {
     
      if (root == NULL) {
        s.pop();
        return;
      }
      
      if (!s.empty() && root->val != s.top())
        return;
      
      cout << root->val << " pop " << s.top() << endl;
      s.pop();
      if(root->left != NULL)
        t1(root->left); 
      else if (root->right != NULL) {
        cout << root->val << " >> pop " << s.top() << endl;
        if (s.size() > 1 && s.top() != -1)
          s.pop();
      }
      if(root->right != NULL)
        t1(root->right);
      else if (root->left != NULL) {
        cout << root->val << " << pop " << s.top() << endl;
        if (s.size() > 1 && s.top() != -1)
          s.pop();
      }
      return;
    }
  
    void t(TreeNode *root) {
      
     if (root == NULL) {
        return;
      }
      
      if (root->left != NULL)
        t(root->left);
      else if (root->right != NULL) {
        cout << ">> push " << -1 << endl;
        s.push(-1);
      }
      if (root->right != NULL)
        t(root->right);
      else if (root->left != NULL) {
        cout << " << push " << -1 << endl;
        s.push(-1);
      }
    
      cout << "push " << root->val << endl;
      s.push(root->val);
      
    }
    bool isSymmetric(TreeNode* root) {
      if (root == NULL || root->left == NULL && root->right == NULL)
        return true;
      
      if (root->left == NULL || root->right == NULL)
        return false;
      t(root->left);
      t1(root->right);
      if (s.empty()) return true;
     // if (s.empty() || s.top() == 0) return true;
      return false;
      
      */
    }
};
