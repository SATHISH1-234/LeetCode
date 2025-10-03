class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both nodes are null → trees match
        if (!p && !q) return true;

        // One is null, the other is not → mismatch
        if (!p || !q) return false;

        // Values must match and subtrees must match
        return (p->val == q->val) 
            && isSameTree(p->left, q->left) 
            && isSameTree(p->right, q->right);
    }
};
