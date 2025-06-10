class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = {{'I', 1},   {'V', 5},     {'X', 10},   {'L', 50},
                             {'C', 100}, {'D', 500}, {'M', 1000}};
        int res = 0;
        int pre = 0;
        int cur = 0;
        for (int i = s.length() - 1; i>=0; i--) {
            for (auto& pair : mp) {
                if (pair.first == s[i]) {
                    cur = pair.second;
                    if (cur >= pre)
                        res += cur;
                    else
                        res -= cur;
                    pre = cur;
                }
            }
        }
        return res;
    }
};