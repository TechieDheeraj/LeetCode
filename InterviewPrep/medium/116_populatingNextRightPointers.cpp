/**
 *      file    :  116_populatingNextRightPointers.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 01 19:14:44
 *      lastMod :  Sun Nov  1 19:14:44 2020
**/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    enum state { NULLSTATE, NON_NULLSTATE};
    Node* connect(Node* root) {

      queue<Node*>q;

      if (root == NULL )
        return NULL;
      if (root->left == NULL && root->right == NULL)
        return root;

      state laststate = NULLSTATE;

      q.push(root);
      q.push(NULL);

      while (!q.empty()) {
        Node *tmp = q.front();
        q.pop();

        if (tmp == NULL) {
          laststate = NULLSTATE;
          if (!q.empty())
            q.push(NULL);
            continue;
        }
        else {

            if (q.empty()) {
               tmp->next = NULL;
             }
            else {
               tmp->next = q.front();
             }
        }

        if (tmp->left != NULL)
          q.push(tmp->left);
        if (tmp->right != NULL)
          q.push(tmp->right);
      }
      return root;
    }
};
