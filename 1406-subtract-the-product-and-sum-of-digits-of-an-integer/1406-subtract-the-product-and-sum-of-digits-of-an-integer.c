int subtractProductAndSum(int n) {
    int digit=log10(n);
    int sum=0,mul=1;
    int temp=n;
    while(n)
    {
        sum+=n/(int)pow(10,digit);
        mul*=n/(int)pow(10,digit);
        n=n%(int)pow(10,digit);
        digit--;
    }
    if(temp%10==0) mul=0;
    int sub=mul-sum;
    return sub;
}