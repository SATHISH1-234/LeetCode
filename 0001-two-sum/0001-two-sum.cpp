class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int len=nums.size();
        for(auto i=0;i<len;i++)
        {
            for(auto j=i+1;j<len;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    return {i,j};
                }
            }
        } 
        return {0};  
    }
};