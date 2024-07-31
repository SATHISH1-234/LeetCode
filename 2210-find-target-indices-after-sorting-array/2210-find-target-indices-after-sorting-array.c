/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int sort(int * nums,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp; 
            }
        }
    }
    return 0;
}
int* targetIndices(int* nums, int n, int target, int* returnSize) {
    int *res = (int*)malloc(n*sizeof(int));
    sort(nums,n);
    int low = 0 , high = n - 1,mid,idx=0;
    while(low<=high)
    {
        mid = low + high - low / 2;
        if(target == nums[mid]) {
            res[idx++] = mid ;
            high = mid - 1;
        }
        else if(target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
   
    sort(res,idx);
    *returnSize = idx;
    return res;
}