int maximumWealth(int** accounts, int size, int* ColSize) {
    int sum=0,result=0;
    for(int i=0;i<size;i++)
    {
        sum=0;
        for(int j=0;j<*ColSize;j++)
        {
           sum=sum+accounts[i][j];
        }
        if(sum>result) result=sum;
    }
    return result;
}