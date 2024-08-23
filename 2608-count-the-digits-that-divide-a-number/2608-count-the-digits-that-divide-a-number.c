
int countDigits(int num) {
    int digit = log10(num)+1,count=0,org=num;
   while(digit)
   {
        int r=num%10;
        if(org%r==0) count++;
        num/=10;
        digit--;
   }
   return count;
}