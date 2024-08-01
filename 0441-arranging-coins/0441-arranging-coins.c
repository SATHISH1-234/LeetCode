int arrangeCoins(int n) {
    // int count=0;
    // if(n==1 || n==0) return n;
    // for(int i=1;i<n+1;i++)
    // {
    //     if(i<=n) {
    //         count++;
    //         if(n!=0){
    //         n-=i;}
    //     }
    //     else break;
    // }
    // return count;

    long left = 0, right = n;
    long k, curr;

    while (left <= right) {
        k = left + (right - left) / 2;
        curr = k * (k + 1) / 2;

        if (curr == n) {
            return (int)k;
        } else if (curr < n) {
            left = k + 1;
        } else {
            right = k - 1;
        }
    }

    return (int)right;


}