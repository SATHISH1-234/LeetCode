int findDuplicate(int* nums, int n) {
    int res[n+1];
    int i=1;
    for(i=0;i<n;i++) res[i] = 0;
    for(i=0;i<n;i++)
    {
        if(res[nums[i]]!=0) return nums[i];
        else res[nums[i]]++;
    }
    return 0;
}