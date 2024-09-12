import java.math.BigInteger;
class Solution {
    public String addStrings(String num1, String num2) {
        
        BigInteger n_num1 = new BigInteger(num1);
        BigInteger n_num2 = new BigInteger(num2);

        BigInteger n = n_num1.add(n_num2);

        String ans = n.toString();
        return ans;
        
    }   
}