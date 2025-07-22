// direct leetcode solution

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                counter = 0;
            }else{
                counter++;
            }
            maxi = max(counter, maxi);
        }

        return maxi;
    }
};