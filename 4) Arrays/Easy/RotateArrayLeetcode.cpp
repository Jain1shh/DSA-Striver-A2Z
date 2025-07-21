#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            if (n == 0) return;
            k = k % n;

            vector<int> subArray;
            
            for(int i = nums.size() - k; i < nums.size(); i++){
                subArray.emplace_back(nums[i]);
            }

            for(int i = (nums.size()) - k - 1; i >= 0; i--){
                nums[i + k] = nums[i];
            }

            for(int i = 0; i < k; i++){
                nums[i] = subArray[i];
            }
        }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> array = {1,2,3,4,5,6,7};
    int k;
    cin >> k;

    Solution sol;

    sol.rotate(array, k);

    return 0;
}