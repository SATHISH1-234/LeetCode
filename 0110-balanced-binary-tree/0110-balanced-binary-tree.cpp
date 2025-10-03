class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode* node) {
        if (!node) return 0;

        int left = checkHeight(node->left);
        if (left == -1) return -1;  // left subtree not balanced

        int right = checkHeight(node->right);
        if (right == -1) return -1; // right subtree not balanced

        if (abs(left - right) > 1) return -1; // not balanced

        return 1 + max(left, right); // return height
    }
};
