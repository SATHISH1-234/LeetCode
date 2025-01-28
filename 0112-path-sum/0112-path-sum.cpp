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
    bool traversal(TreeNode* root, int targetSum,int sum){
        if(root == NULL) return false;
        int cur = sum + root->val;
        if(cur == targetSum && root->left==NULL && root->right==NULL){
            return true;
        }
        return traversal(root->left,targetSum,cur)|| traversal(root->right,targetSum,cur); 
    }
   public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traversal(root,targetSum,0);
    }
};