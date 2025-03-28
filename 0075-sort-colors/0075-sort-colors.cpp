class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int mid = 0;
        int end = n-1;

        while (end >= mid) {
            if (nums[mid] == 0) {
                swap (nums[start], nums[mid]);
                start++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap (nums[mid], nums[end]);
                end--;
            }
        }
        //return nums;
    }
};