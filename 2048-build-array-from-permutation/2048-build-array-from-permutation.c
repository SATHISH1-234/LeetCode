/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int n, int* returnSize) {
    int * temp=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        temp[i]=nums[nums[i]];
    }
    *returnSize=n*1;
     return temp;   
}
