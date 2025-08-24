#include <iostream>
#include <climits>
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
    int helper(TreeNode* root, int& res)
    {
        if(root == nullptr)
            return 0;
        int leftHeight = helper(root->left, res);
        int rightHeight = helper(root->right, res);
        if(res < (leftHeight+rightHeight))
        {
            res = leftHeight + rightHeight;
        }
        return 1 + max(leftHeight, rightHeight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        helper(root, res);
        return res;
    }
};