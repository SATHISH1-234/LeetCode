int countEven(int num) {
    int count=0;
    for(int i=2;i<=num;i++){
        if(i>=10){
            int temp=i,sum=0;
            while(temp){ sum+=temp%10; temp/=10;}
            if(sum%2==0) count++;
        }
        if(i%2==0 && i<10) count++;
    }
    return count;

}