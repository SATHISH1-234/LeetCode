class Solution {
    public boolean isPalindrome(String s) {
        
        s = s.toLowerCase();
        StringBuilder res = new StringBuilder();
        for(char i:s.toCharArray()){
            if(Character.isLetter(i) || Character.isDigit(i)){
                res.append(i);
            }
        }
        StringBuilder temp = new StringBuilder(res);
        temp=temp.reverse();
        for(int i=0;i<res.length();i++){
            if(res.charAt(i) != temp.charAt(i)) return false;
        }
        return true;
    }
}