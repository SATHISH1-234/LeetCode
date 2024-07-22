int sumof(int n)
{
    int sum=0;
    while(n)
    {sum+=(int)pow(n%10,2);
    n/=10;}
    return sum;
}
bool isHappy(int n) {
    if(n==1 || n==7) return true;
    while(n>9)
    {
        n=sumof(n);
        if(n==1 || n==7) return true;
    }
    return false;
}