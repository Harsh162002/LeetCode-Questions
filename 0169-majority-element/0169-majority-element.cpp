class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int value = nums[0];
        int count = 0;

        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == value) {
                count++;
            }
            else if (nums[i] != value) {
                if (count == 0) {
                    value = nums[i];
                }
                else {
                    count--;
                }
            }
        }
        return value;
    }
};