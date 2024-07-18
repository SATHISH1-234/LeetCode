bool isAnagram(char* s, char* t) {
  int c[26]={0};
  for(int i=0;i<strlen(s);i++)
  {
    c[tolower(s[i])-97]++;
  }  
  for(int i=0;i<strlen(t);i++)
  {
    c[tolower(t[i])-97]--;
  } 
  for(int i=0;i<26;i++)
  {
    if(c[i]!=0) return false;
  }
  return true;
}