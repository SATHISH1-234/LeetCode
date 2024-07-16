char* longestCommonPrefix(char** strs, int strsSize) {
    char *temp=(char*)malloc(strlen(strs[0])+1 * sizeof(char));
    temp[0]='\0';
    if(strsSize==1) return strs[0];
    for(int i=0;i<strlen(strs[0]);i++)
    {
        int flag=1;
        for(int j=1;j<strsSize;j++)
        {
            if(strs[0][i]!=strs[j][i]) 
                flag=0;
        }
        if(flag)
        {
            temp[i]=strs[0][i];
            temp[i+1]='\0';
        }
        else{
            if(!temp[0]) return "";
            return temp;

        }

    }
    return temp;
}