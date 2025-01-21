class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0;
        int negCount = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                posCount++;
            } else if (nums[i] < 0) {
                negCount++;
            }
        }
        maxi = max(posCount, negCount);
        return maxi;
    }
};