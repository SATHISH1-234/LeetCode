
int gcd(int n, int m) {
    int min = n < m ? n : m;
    
    while (min > 0) {
        if (n % min == 0 && m % min == 0) {
            return min;  
        }
        min--;
    }
    return 1; 
    }

int findGCD(int* nums, int numsSize) {
    int max,min;
    max=nums[0];
    min=nums[0];
    for(int i=0;i<numsSize;i++)
    {
       if(max<nums[i]) max=nums[i];
        if(min>nums[i]) min=nums[i];
    }
    printf("%d %d",max,min);
    int nas=gcd(max,min);
    return nas;
}