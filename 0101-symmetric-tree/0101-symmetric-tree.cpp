class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;          // both null → symmetric
        if (!t1 || !t2) return false;         // one null → not symmetric
        return (t1->val == t2->val)            // values must match
            && isMirror(t1->left, t2->right)  // left vs right
            && isMirror(t1->right, t2->left); // right vs left
    }
};
