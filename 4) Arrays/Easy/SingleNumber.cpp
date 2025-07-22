//Direct leetcode solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;

        for (int num : nums) {
            XOR ^= num;
        }

        return XOR;

    }
};

// 1 ^ 1 = 0 XOR of same values is zero
// 0 ^ (value > 0) = value it self