class Solution {

public:
    vector<char> v;
    void vowel(string s){
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a'||s[i] == 'A'||s[i] == 'e'||s[i] == 'E'||s[i] == 'i'||s[i] == 'I'||s[i] == 'o'||s[i] == 'O'||     s[i] == 'u'||s[i] == 'U') v.push_back(s[i]);}
        int l = 0;
        int r = v.size()-1;
        while(l<=r){
            char t = v[l];
            v[l] = v[r];
            v[r] = t;
            l++;
            r--;
        }
    }
public:
    string reverseVowels(string s) {
        vowel(s);
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a'||s[i] == 'A'||s[i] == 'e'||s[i] == 'E'||s[i] == 'i'||s[i] == 'I'||s[i] == 'o'||s[i] == 'O'||     s[i] == 'u'||s[i] == 'U')  s[i] = v[idx++];}
        
        return s;
    }
};