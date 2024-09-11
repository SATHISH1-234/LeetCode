int countPrimes(int n) {
    bool *ans=(bool*)malloc(n*sizeof(bool));
    for(int i=0;i<n;i++){
        ans[i]=false;
    }
    for (int i = 2; i * i < n; i++) {
        if (!ans[i]){
            for(int j= i * i ; j < n ; j += i){
                ans[j]=true;
            }
        }
    }
    int sum=0;
    for(int i=2;i<n;i++){
        if(!ans[i]) sum++;
    }
    return sum;
}
