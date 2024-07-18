char** fizzBuzz(int n, int* returnSize) {
    char **res=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        res[i]=(char*)malloc(10); 
    }
    int idx=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3 == 0 && i%5 == 0) res[idx++]="FizzBuzz";
        else if(i%3 == 0) res[idx++]="Fizz";
        else if(i%5 == 0) res[idx++]="Buzz";
        else sprintf(res[idx++],"%d",i);
    }
    *returnSize=n;
    return res;
}