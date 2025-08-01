class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int, int> numsMap;

        for(auto num : nums){
            numsMap[num]++;
        }

        for(auto num : numsMap){
            if(num.second > n/2){
                return num.first;
            }
        }

        return -1;
    }
};