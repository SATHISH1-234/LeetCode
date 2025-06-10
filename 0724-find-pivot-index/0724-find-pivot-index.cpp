class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot=-1;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum+=nums[i];
        }
        int add = 0;
        for(int j=0;j<nums.size();j++){
            sum = sum - nums[j];
            // if(nums.size()-1 == j) continue;
            if(add==sum) {pivot = j ;break;}
            add += nums[j];
        }
        return pivot;
    }
};