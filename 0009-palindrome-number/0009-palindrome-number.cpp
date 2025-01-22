class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse = 0;
        int xcopy = x;

        if (x < 0) {
            return false;
        }

        while (x>0) {
            reverse = (reverse*10) + (x%10);
            x = x/10;
        }
        if (reverse == xcopy) {
            return true;
        }
        return false;
    }
};