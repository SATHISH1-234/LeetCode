/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     TreeNode* traversal(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL) return NULL;
        if(root==p || root==q) return root;
        TreeNode *left = traversal(root->left,p,q);
        TreeNode *right = traversal(root->right,p,q);
        if(left!=NULL && right!=NULL) return root;
        return left==NULL?right:left;
     }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal(root,  p, q);
    }
};