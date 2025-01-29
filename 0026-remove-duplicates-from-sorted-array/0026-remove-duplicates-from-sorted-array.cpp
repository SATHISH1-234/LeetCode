class Solution {
public:
    set<int>s;
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        nums.assign(s.begin(),s.end());
        return nums.size();
    }
};