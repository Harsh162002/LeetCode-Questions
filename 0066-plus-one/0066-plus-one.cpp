class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ld = digits.size()-1; // last digit

        while (ld >= 0) {
            if (digits[ld] < 9) {
                digits[ld] += 1;
                return digits;
            }
            else {
                digits[ld] = 0;
            }
        ld--;    
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};