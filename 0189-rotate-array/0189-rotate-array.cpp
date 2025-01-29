class Solution {
public:
    vector<int> v;
    void reverse(vector<int>& var,int left,int right){ 
            while(left<=right){
            int temp = var[left];
            var[left] = var[right];
            var[right] = temp;
            left++;
            right--;
    }
    
    }
    void rotate(vector<int>& nums, int k) {
       
        k  = k % nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0 ,k-1);
        reverse(nums,k,nums.size()-1);
        

    }
};