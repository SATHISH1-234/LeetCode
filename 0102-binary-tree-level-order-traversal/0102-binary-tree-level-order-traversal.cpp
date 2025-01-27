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
    vector<vector<int>>l;
    void level(TreeNode *root){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int queue_size = q.size();
            vector<int>cur;
            while(queue_size){
                    TreeNode * temp = q.front();
                    cur.push_back(temp->val);
                    q.pop();
                    queue_size--;
                    if(temp->left!=NULL) q.push(temp->left);
                    if(temp->right!=NULL) q.push(temp->right);
            }
            l.push_back(cur);
            }
            }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return l;
        level(root);
        return l;
    }
};