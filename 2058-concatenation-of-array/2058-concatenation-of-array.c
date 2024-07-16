
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
        int i;
        int *temp=(int*)malloc(2*numsSize*sizeof(int));
        for(i=0;i<numsSize;i++)
        {
            temp[i]=nums[i];
            temp[i+numsSize]=nums[i];
        }
        *returnSize=2*numsSize;
        return temp;    
}