int isPali(char* s, int i, int j){
    while(i < j){
        if(s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}
char* longestPalindrome(char* str){
    int n = strlen(str);
    if(n < 2) return str;
    char* ans;
    for(int len = n-1; len > 0; len--){
        for(int i = 0 ; i + len < n; i++){
            if(isPali(str, i, i + len)){
                ans = (char*)malloc(len + 2);
                strncpy(ans, str + i, len+1);
                ans[len+1] = '\0';
                return ans;
            }
        }
    }
    ans = (char*)malloc(2);
    ans[0] = str[0];
    ans[1] = '\0';
    return ans;
}


