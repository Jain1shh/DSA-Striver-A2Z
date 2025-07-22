// Direct leetcode solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();

        int SumNums = 0;

        for(auto num : nums){
            SumNums += num;
        }

        int sum = N * (N + 1) / 2;

        return sum - SumNums;
    }
};