int addDigits(int num) {
    // int sum=0;
    // if(num==0) return 0;
    // while(num||sum>9){
    // if(sum>9){
    //     num=sum;
    //     sum=0;
    // }
    //    sum+=num%10;
    //    num/=10;
    // }
    return (num-1)%9+1;
}