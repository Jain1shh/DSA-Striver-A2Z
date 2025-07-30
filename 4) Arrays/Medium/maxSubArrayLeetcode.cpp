class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCount = INT_MIN;
        int tmp = 0;

        for(int i = 0; i < nums.size(); i++){
            tmp += nums[i];

            if(tmp < nums[i]) tmp = nums[i];
            if(maxCount < tmp) maxCount = tmp;
        }
        return maxCount;
    }
};