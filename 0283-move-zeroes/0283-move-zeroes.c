void moveZeroes(int* nums, int numsSize) {
    int count=0;
    int digit=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0) nums[count++]=nums[i];
        digit++;
    }
    for(int i=count;i<numsSize;i++)
    {
        nums[i]=0;
        
    }
}