class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ctnZero = 0;
        int ctnOne = 0;
        int ctnTwo = 0;

        for(auto num : nums){
            if(num == 0) ctnZero++;
            else if(num == 1) ctnOne++;
            else if(num == 2) ctnTwo++;
        }

        int indexCounter = 0;

        for(int i = 0; i < ctnZero; i++) nums[indexCounter++] = 0;
        for(int i = 0; i < ctnOne; i++) nums[indexCounter++] = 1;
        for(int i = 0; i < ctnTwo; i++) nums[indexCounter++] = 2;
        
    }
};