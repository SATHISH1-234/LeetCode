/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    int idx=0;
    int temp[heightsSize];
    char **res=(char**)malloc(namesSize*sizeof(char*));
    for(int i=0;i<namesSize;i++) res[i]=(char*)malloc(namesSize*sizeof(char));
    for(int i=0;i<heightsSize;i++)
        temp[i]=heights[i];
    for(int i=0;i<heightsSize-1;i++)
    {
        for(int j=i+1;j<heightsSize;j++)
        {
            if(temp[i]<temp[j])
            {
                int flag=temp[i];
                temp[i]=temp[j];
                temp[j]=flag;
            }
        }
    }
    for(int i=0;i<heightsSize;i++)
    {
        for(int j=0;j<heightsSize;j++){
                if(temp[i]==heights[j]){ 
                    res[idx]=names[j];
                    idx++;
                    break;
            }
        }
    }
   
    *returnSize=idx;
    return res;
   
}