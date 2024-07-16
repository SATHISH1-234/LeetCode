class Solution {
public:
    int reverse(int x) {
        int r;
        long long s=0;
        if(x<0)
        {
           while(x!=0){
           r=x%10;
           s = s*10+r;
           x=x/10;
           }
           if(s>=-2147483648 && s<=2147483647) 
            return s;
            else
            return 0;
        }
        else{
        while(x>0)
        {
            r=x%10;
            s = s*10+r;
            x=x/10;
        }
        if(s>=-2147483648 && s<=2147483647) 
            return s;
        else
        return 0;
       }
    }
};