class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int max = arr[0];
        int i = 0, j = i + 1;
        while (i < j && j < arr.size()) {
            int y = arr[i] * arr[j];
            if (y > max)
                max = y;
            i++;
            j++;
        }
        return max;
    }
};