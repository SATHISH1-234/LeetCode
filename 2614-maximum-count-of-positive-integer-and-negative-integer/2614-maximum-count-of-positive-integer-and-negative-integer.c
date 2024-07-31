int maximumCount(int* nums, int n) {
    int pc = 0 , nc =0 ;
    int low = 0 , high = n -1,mid;
    while(low<=high)
    {
        mid = low + (high - low) / 2;
        if(nums[mid]>0) high = mid -1;
        else low = mid+1;
    }
    pc += n - low;
    low = 0 , high = n -1;
    while(low<=high)
    {
        mid = low + (high - low) / 2;
        if(nums[mid]<0)  low = mid+1;
        else high = mid -1;
    }
    int temp = n - low;
    nc+=n-temp;
    if(pc>=nc) return pc;
    return nc;
    
}