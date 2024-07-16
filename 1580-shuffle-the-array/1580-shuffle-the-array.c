

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int l=0;
    int *temp=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<n;i++)
    {
        temp[l]=nums[i];
        l++;
        temp[l]=nums[n+i];
        l++;
        
    }
   *returnSize=l;
    return temp;
}