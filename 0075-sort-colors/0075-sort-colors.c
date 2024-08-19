void sortColors(int* nums, int n) {
    int count[3]={0},idx=0;
    for(int i=0;i<n;i++) count[nums[i]]++;
    for(int i=0;i<count[0];i++) nums[idx++]=0;
    for(int i=0;i<count[1];i++) nums[idx++]=1;
    for(int i=0;i<count[2];i++) nums[idx++]=2;
}