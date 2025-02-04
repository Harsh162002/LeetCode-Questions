class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(), nums1.end());
        unordered_set<int>result;

        for (int i=0; i<nums2.size(); i++) {
            int num = nums2[i];
            if (s1.count(num)) {
                result.insert(num);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};