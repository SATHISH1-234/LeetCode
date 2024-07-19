 
int maxProfit(int* prices, int pricesSize){
    int i=0,j=1,res=0,max=0,minval=prices[i];
    for(i=1;i<pricesSize;i++){
        if(prices[i]>minval) {
            res=(prices[i]-minval>=res ? prices[i]-minval : res);
        }        
        else minval=prices[i];
    }
    return res;
}