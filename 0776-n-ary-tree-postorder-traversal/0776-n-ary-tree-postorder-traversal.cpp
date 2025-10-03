class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }

private:
    void traverse(Node* node, vector<int>& result) {
        if (!node) return;

        for (Node* child : node->children) {
            traverse(child, result);
        }

        result.push_back(node->val);
    }
};
