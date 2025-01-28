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
    public:
    vector<double>v;
    void levelorder(TreeNode* root){
        if(root==NULL) return ;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
        int qsize = q.size();
        double sum =0;
        for (int i = 0; i < qsize; i++) {
                TreeNode* temp = q.front();
                q.pop();
                sum = sum+ temp->val;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            v.push_back(sum/qsize);

        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        levelorder(root);
        return v;
    }
};