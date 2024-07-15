char* intToRoman(int num) {
    int nums[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char * sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    char *res=(char*)malloc(20 *sizeof(char));
    int i=12;
    res[0]='\0';
    while(num>0)
    {
        while(num>=nums[i])
        {
            num-=nums[i];
            strcat(res,sym[i]);
        }
        i--;
    }
   
    return res;
    
    
}