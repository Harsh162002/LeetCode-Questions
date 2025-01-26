class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0;
        int maxi = -1;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] < nums[j]) {
                    ans = nums[j] - nums[i];
                    maxi = max(maxi, ans);
                }
            }
        }
        return maxi;
    }
};