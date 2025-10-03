class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0; // empty tree

        // If one child is null, we must take the other side
        if (!root->left) return 1 + minDepth(root->right);
        if (!root->right) return 1 + minDepth(root->left);

        // Both children exist -> take minimum of left & right
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
