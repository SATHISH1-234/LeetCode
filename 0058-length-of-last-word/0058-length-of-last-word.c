int lengthOfLastWord(char* s) {
    
   int count=0;
   char temp;
   int j=strlen(s)-1;
   for(int k=j;k>=0;k--)
   {
       if(isspace(s[k])) j--;
       else break;
   }
   for(int i=j;i>=0;i--)
   {
        if(isspace(s[i])) break;
        count++;
        
   }

   return count;
}