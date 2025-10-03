class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        backtrack(result, current, 0, 0, n);
        return result;
    }

private:
    void backtrack(vector<string>& result, string& current, int open, int close, int n) {
        // If the current string is complete
        if (current.size() == n * 2) {
            result.push_back(current);
            return;
        }

        // Add an open parenthesis if we still can
        if (open < n) {
            current.push_back('(');
            backtrack(result, current, open + 1, close, n);
            current.pop_back(); // backtrack
        }

        // Add a close parenthesis if it won't exceed opens
        if (close < open) {
            current.push_back(')');
            backtrack(result, current, open, close + 1, n);
            current.pop_back(); // backtrack
        }
    }
};
