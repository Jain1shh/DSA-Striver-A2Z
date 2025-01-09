class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        int lD = 0;
        while(x != 0){
            lD = x % 10;
            // Check for overflow for positive and negative numbers
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lD > 7)) {
                return 0; // Positive overflow
            }
            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && lD < -8)) {
                return 0; // Negative overflow
            }
            revNum = (revNum * 10) + lD;

            x = x/10;
        }

        return revNum;
    }
};