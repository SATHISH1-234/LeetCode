class Solution {
public:
    string reverseWords(string s) {
        int w = 0, c = 0;
        char res[1000][100];  
        string k = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (c > 0) { 
                    res[w][c] = '\0';  
                    w++; 
                    c = 0;
                }
                continue;
            }
            res[w][c++] = s[i];  
        }

        if (c > 0) {
            res[w][c] = '\0'; 
            w++;
        }

        for (int i = w - 1; i >= 0; i--) {
            for (int j = 0; res[i][j] != '\0'; j++) {
                k += res[i][j];
            }
            if (i != 0) {
                k += ' ';  
            }
        }

        return k;  
    }
};
