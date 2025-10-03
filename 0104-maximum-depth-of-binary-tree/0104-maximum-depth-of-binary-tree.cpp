class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;  // base case: empty tree
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return 1 + max(leftDepth, rightDepth);
    }
};
