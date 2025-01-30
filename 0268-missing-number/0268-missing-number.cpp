class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0;
       
        while(count <= nums.size()){
        int flag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==count) {flag=1; break;}
        }
        if(flag == 0) break;
        count++;
        }
        return count;
    }
};