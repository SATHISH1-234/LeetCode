class Solution {
public:
    string intToRoman(int num) {
        
        string res="";
        while(num!=0){
            while(num>=1000) {num-=1000; res.append("M");}
            while(num>=900) {num-=900; res.append("CM");}
            while(num>=500)  {num-=500; res.append("D");}
            while(num>=400) {num-=400; res.append("CD");}
            while(num>=100) {num-=100; res.append("C");}
            while(num>=90) {num-=90; res.append("XC");}
            while(num>=50) {num-=50; res.append("L");}
            while(num>=40) {num-=40; res.append("XL");}
            while(num>=10) {num-=10; res.append("X");}
            while(num>=9) {num-=9; res.append("IX");}
            while(num>=5) {num-=5; res.append("V");}
            while(num>=4) {num-=4; res.append("IV");}
            while(num>=1) {num-=1; res.append("I");}

        }
        return res;
    }
};