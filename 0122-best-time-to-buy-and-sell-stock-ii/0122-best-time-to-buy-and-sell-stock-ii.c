int maxProfit(int* prices, int pricesSize) {
    int sumprices=0;
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]>prices[i-1])
        {
            sumprices+=prices[i]-prices[i-1];
        }
    }
    return sumprices;
}