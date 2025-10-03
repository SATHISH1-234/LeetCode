class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Mapping of digits to corresponding letters
        vector<string> mapping = {
            "",    // 0
            "",    // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };

        vector<string> result;
        string current;
        backtrack(digits, 0, current, result, mapping);
        return result;
    }

private:
    void backtrack(const string &digits, int index, string &current, 
                   vector<string> &result, const vector<string> &mapping) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);              
            backtrack(digits, index + 1, current, result, mapping); 
            current.pop_back();                 
        }
    }
};
