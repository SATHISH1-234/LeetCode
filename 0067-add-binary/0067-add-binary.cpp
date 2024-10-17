class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i--] - '0'; // Convert char to int
            }
            if (j >= 0) {
                sum += b[j--] - '0'; // Convert char to int
            }
            carry = sum / 2; // Update carry for next iteration
            result.push_back((sum % 2) + '0'); // Append the current bit to the result
        }
        
        reverse(result.begin(), result.end()); // Reverse the result string
        return result;
    }
};
