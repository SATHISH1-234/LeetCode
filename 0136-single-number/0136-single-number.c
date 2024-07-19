int singleNumber(int* nums, int numsSize) {
    if(numsSize<=1)
        return nums[0];
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j])
             {      nums[i]=0;
                    nums[j]=0;} }
    }
    for(int i=0;i<numsSize;i++)
        if(nums[i]!=0) return nums[i];
    return 0;
}
