int romanToInt(char* s) {
   int rom[256]={0};
    rom['I']=1;
    rom['V']=5;
    rom['X']=10;
     rom['L']=50;
       rom['C']=100;
        rom['D']=500;
         rom['M']=1000;
    int total = 0;
    while(*s){
        if(rom[(int)*s] < rom[(int)*(s+1)]){
            total+=rom[(int)*(s+1)]-rom[(int)*s];
            s+=2;
        }
        else{
            total+=rom[(int)*s];
            s++;
        }
    }      
    return total;
}