

int numberOfMatches(int n){
    int match=0,ad=0;
    while(n!=1){
        if(n%2!=0){
            match =match+(n-1)/2;
            ad= (n-1)/2+1;
            n=ad;
            }
        else{
            match =match+ n / 2;
            ad= n/2;
            n=ad;
            }}
    return match;
}