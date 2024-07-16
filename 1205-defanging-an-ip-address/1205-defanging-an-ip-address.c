

char * defangIPaddr(char * address){
    char *res=(char*)malloc(strlen(address)*3+1);
    int c=0;
    for(int i=0;i<strlen(address);i++)
    {
        if(address[i]=='.')
        {
            res[c++]='[';
            res[c++]='.';
            res[c++]=']';
        }
        else
        res[c++]=address[i];
    }
    res[c] = '\0';
    return res;
}