class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>snum;

        for (auto it : nums) {
            snum[it]++;
        }
        for (auto it : nums) {
            if (snum[it] == 1) {
                return it;
            }
        }
        return -1;
    }
};