

char* sortSentence(char* s) {
    int idx = 0, m = 0, c = 0, d = 1;
    int len = strlen(s);
    char res[40][400];
    char *rev = (char*)malloc(sizeof(char) * (len + 1)); 

    for (int i = 0; i < len; i++) {
        if (isspace(s[i])) {
            res[m][c] = '\0'; 
            m++;
            c = 0;
            continue;
        }
        res[m][c++] = s[i];
    }
    res[m][c] = '\0'; 
    
    // if(m==1){
    //     res[0][strlen(res[0])-1]='\0';
    //     return res[0];
    //     }
    for (int i = 0; i <= m; i++) {
        if (res[i][strlen(res[i])-1] == d + '0') {
            d++;
            int j = 0;
            while (j < strlen(res[i]) - 1) { 
                rev[idx++] = res[i][j++];
            }
            rev[idx++] = ' '; 
            i = -1; 
        }
    }
    
    if (idx > 0 && rev[idx - 1] == ' ') {
        rev[idx - 1] = '\0'; 
    } else {
        rev[idx] = '\0';
    }
    
    return rev;



}