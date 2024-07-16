int finalValueAfterOperations(char** op, int Size) {
    int x=0;
    int c=0;
    for(int i=0;i<Size;i++)
    {
        if(op[i][1]=='+'){
            x=x+1;
            
            }
        else{
            
            x=x-1;
        }
    }
    return x;
}