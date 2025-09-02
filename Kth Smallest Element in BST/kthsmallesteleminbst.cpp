#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    TreeNode* helper(TreeNode* root, int& k)
    {
        if(root == nullptr)
            return root;
        TreeNode* left = helper(root->left, k);
        if(left)
            return left;
        k--;
        if(k == 0)
            return root;
        return helper(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp = helper(root, k);
        if(temp)
            return temp->val;
        return 0;
    }
};