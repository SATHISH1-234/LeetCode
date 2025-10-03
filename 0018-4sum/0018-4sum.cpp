class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;

        // Sort array to handle duplicates easily
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            // Avoid duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                // Avoid duplicates for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[left] + (long long)nums[right];

                    if (sum == newTarget) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // Skip duplicates for left
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        // Skip duplicates for right
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    } 
                    else if (sum < newTarget) {
                        left++;
                    } 
                    else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};
