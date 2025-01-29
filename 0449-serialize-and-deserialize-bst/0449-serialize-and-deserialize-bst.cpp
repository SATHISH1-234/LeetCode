/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res="";
        if(root == NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *temp = q.front();
            q.pop();
            if(temp == NULL){
                res+="#";
                res+=",";
            }
            else{
            res+=to_string(temp->val) + "," ;
            q.push(temp->left);
            q.push(temp->right);
            }
        }
        cout<<res<<"\n";
        return res;
    }

    // Decodes your encoded data to tree.
     TreeNode* deserialize(string data){
    if (data.empty()) return NULL;
        
        vector<string> v;
        stringstream ss(data);
        string token;
        while (getline(ss, token, ',')) {
            v.push_back(token);
        }

        int x = stoi(v[0]);
        TreeNode* root = new TreeNode(x);
        queue<TreeNode*> q;
        q.push(root);

       
        int i = 1;  
        while (i < v.size()) {
            TreeNode* temp = q.front();
            q.pop();

          
            if (v[i] != "#") {
                int x = stoi(v[i]);
                TreeNode* left = new TreeNode(x);
                temp->left = left;
                q.push(left);
            }
            i++; 

      
            if (i < v.size() && v[i] != "#") {
                int x = stoi(v[i]);
                TreeNode* right = new TreeNode(x);
                temp->right = right;
                q.push(right);
            }
            i++; 
        }

        return root;
    }
       
      
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;