int smallestEvenMultiple(int n) {
    if(n<1) return n;
    int i=1;
    while(i)
    {
        if(i%2==0 && i%n==0) break;
        i++;
    }
    return i;
    
}