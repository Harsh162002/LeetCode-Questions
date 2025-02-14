class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3) {
            return -1;
        }
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        for (auto it : nums) {
            if (it > mini && it <maxi) {
                return it;
            }
        }
        return -1;
    }
};