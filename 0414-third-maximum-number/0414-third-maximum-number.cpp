class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        reverse (nums.begin(), nums.end());
        
        int count = 1;
        int ans = nums[0];

        for (int i=1; i<n; i++) {
            if (nums[i-1] != nums[i]) {
                count++;
                ans = nums[i];
            }
            if (count == 3) {
                return ans;
            }
        }
        return nums[0];
    }
};