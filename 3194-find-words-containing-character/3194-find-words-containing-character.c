/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *temp=(int*)malloc(wordsSize*sizeof(int));
    int c=0;
    for(int i=0;i<wordsSize;i++)
    {
    for(int j=0;j<strlen(words[i]);j++)
    {
        if(words[i][j]==x)
         {
            temp[c++]=i; 
            break;
          } 
    }

    }
    *returnSize=c;
    return temp;
            
    
   
}