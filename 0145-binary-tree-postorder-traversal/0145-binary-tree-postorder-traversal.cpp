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
    vector<int> list;
    void preorder(TreeNode* root) {
        if (root == NULL)
            return;
        preorder(root->left);
        preorder(root->right);
        list.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        preorder(root);
        return list;
    }
};