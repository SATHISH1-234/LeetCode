int mostWordsFound(char** sentences, int sentencesSize) {
    int max=0;
    for(int i=0;i<sentencesSize;i++)
    {
        char word[100][100];
        int m=0,n=0;
        for(int j=0;j<strlen(sentences[i]);j++)
        {
            if(isspace(sentences[i][j]))
            {
                word[m][n]='\0';
                m++;
                n=0;
                continue;
            }
            word[m][n++]=sentences[i][j];
        }
        if(m>max) max=m;
        else continue;
    }
    return max+1;
}