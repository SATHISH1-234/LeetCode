int arrangeCoins(int n) {
    int count=0;
    if(n==1 || n==0) return n;
    for(int i=1;i<n+1;i++)
    {
        if(i<=n) {
            count++;
            if(n!=0){
            n-=i;}
        }
        else break;
    }
    return count;
}