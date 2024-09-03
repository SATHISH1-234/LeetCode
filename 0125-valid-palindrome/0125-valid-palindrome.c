
bool isPalindrome(char* s) {
    int len = strlen(s);
    int j=0;
    for(int i=0;i<len;i++)
    {
        
        if(isalpha(s[i])||isdigit(s[i]))
        {
            s[j++]=tolower(s[i]);
        }

    }
    s[j]='\0';
    int r=0,l=j-1;
    while(r<l)
    {
        if(s[r++]!=s[l--]){
            return false;
        }
    }
    return true;
}