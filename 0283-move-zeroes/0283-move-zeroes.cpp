class Solution {
public:
    void swap(vector<int>& nums,int itr,int next_var){
        int temp = nums[itr];
        nums[itr] = nums[next_var];
        nums[next_var] = temp;
    }
    void moveZeroes(vector<int>& nums) {
     int itr=0,next_var=0,size=nums.size();
     while(itr<size){
        if(nums[itr]!=0) swap(nums,itr,next_var++);
        itr++;
     }
    }
};