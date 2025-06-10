class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = -1;
        for (int i = 0; i < nums.size(); i++) {
            int lm = 0;
            int rm = 0;
            for (int j = 0; j < i; j++) {
                if (i == 0)
                    break;
                lm += nums[j];
            }
            for (int k = i + 1; k < nums.size(); k++) {
                if (i == nums.size() - 1)
                    break;
                rm += nums[k];
            }
            if (lm == rm) {
                pivot = i;
                break;
            }
        }
        return pivot;
    }
};