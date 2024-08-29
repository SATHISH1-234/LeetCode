bool canJump(int* nums, int numsSize) {
    // if(numsSize==1) return true;
    // for(int i=0;i<numsSize;i++)
    // {
    //     int sum = nums[i];
    //     if(sum==0) return false;
    //     {
    //         if(sum+i>=numsSize-1) return true;
            
    //     }
    // }
    // return false;
   
    if (numsSize == 0) return false;

    int maxReach = 0;

    for (int i = 0; i < numsSize; ++i) {
        if (i > maxReach) return false;

        maxReach = (maxReach > i + nums[i]) ? maxReach : i + nums[i];

        if (maxReach >= numsSize - 1) return true;
    }

    return false; 
}

