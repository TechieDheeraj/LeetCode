/**
 *      file    :  501_findModeInBST.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 11 02:12:40
 *      lastMod :  Wed Nov 11 02:12:40 2020
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
    unordered_map<int, int> hashMap;
    vector<int>result;

    void fillMap(TreeNode *root) {
       if (root== NULL)
        return;

      hashMap[root->val]++;

      fillMap(root->left);
      fillMap(root->right);
    }

    vector<int> findMode(TreeNode* root) {
      int maxe = INT_MIN;
      if (root== NULL)
        return {};

      fillMap(root);

      for (auto &i: hashMap) {
        if (maxe < i.second) {
          result.clear();
          maxe = i.second;
          result.push_back(i.first);
        }
        else if (maxe == i.second) {
          result.push_back(i.first);
        }
        else
          continue;
      }

      return result;
    }
};
