class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;

        int n = nums.size();

        for(int num : nums){
            if(num < 0){
                negatives.emplace_back(num);
            }else if(num >= 0){
                positives.emplace_back(num);
            }
        }

        int ctr = 0;

        for(int i = 0; i < n; i = i + 2){
            nums[i] = positives[ctr];
            ctr++;
        }

        ctr = 0;

        for(int i = 1; i < n; i = i + 2){
            nums[i] = negatives[ctr];
            ctr++;
        }

        return nums;
    }
};