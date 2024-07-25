int countSeniors(char ** details, int detailsSize){
    int count=0;
    for(int i=0;i<detailsSize;i++)
    {
        int intDigit = details[i][11] - '0';
        int int2 = details[i][12] - '0';
        if(intDigit>6 ||  intDigit==6 && int2>0) count++;
    }
    return count;
}