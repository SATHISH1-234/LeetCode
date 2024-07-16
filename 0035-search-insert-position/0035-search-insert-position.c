int searchInsert(int* nums, int numsSize, int target) {
   
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target) return i;
        for(int i=0;i<numsSize;i++){
        if(i==numsSize-1 && nums[i] < target || nums[i]<target && nums[i+1]>target) 
        return i+1;
    }}
    return 0;

}