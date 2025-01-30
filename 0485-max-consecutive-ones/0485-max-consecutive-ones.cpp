class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0; 
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                cout << count << "\n";
            }
            count = 0;  
        }
    }
    
    if (maxCount < count) return count;  
    return maxCount;
    }
};