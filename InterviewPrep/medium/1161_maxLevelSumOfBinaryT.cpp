/**
 *      file    :  1161_maxLevelSumOfBinaryT.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 03 18:16:55
 *      lastMod :  Tue Nov  3 18:16:55 2020
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
  int maxLevelSum(TreeNode* root) {
    queue<TreeNode*>q;

    pair<int, int>result;
    int level = 0;
    int maxe = 0;
    result.first = 0;
    result.second = INT_MIN;

    if (root == NULL)
      return 0;

    q.push(root);

    while (!q.empty()) {
      level++;
      int size = q.size();

      for (int i = 0; i < size; ++i) {
        TreeNode *tmp = q.front();
        q.pop();

        maxe+=tmp->val;
        if (tmp->left != NULL)
          q.push(tmp->left);
        if (tmp->right != NULL)
          q.push(tmp->right);

      }
      if (maxe > result.second) {
        result.first = level;
        result.second = maxe;
      }

      maxe = 0;
    }
    return result.first;
    /*
    queue<TreeNode*>q;

    pair<int, int>result;
    int level = 0;
    int maxe = 0;

    result.first = 0;
    result.second = INT_MIN;

    if (root == NULL)
      return NULL;

    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
      TreeNode *tmp = q.front();
      q.pop();

      if (tmp == NULL) {
        level++;

         if(result.second < maxe) {
           result.second = maxe;
          result.first = level;
        }
        maxe = 0;

        if (!q.empty()) {
          q.push(NULL);
          continue;
        }
      }
      else
        maxe+=tmp->val;

      if (tmp!= NULL) {
        if (tmp->left != NULL)
          q.push(tmp->left);
        if (tmp->right != NULL)
          q.push(tmp->right);
      }
    }
    return result.first;
    */
  }
};
