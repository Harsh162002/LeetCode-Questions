class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        sort (nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            int product = (nums[n-1] - 1) * (nums[n-2] - 1);
            maxi = max(maxi, product);
        }
        return maxi;
    }
};