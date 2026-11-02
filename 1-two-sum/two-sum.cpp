class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i < n-1;i++){
            for(int k = i+1;k < n;k++){
                if(nums[i] + nums[k] == target){
                    return {i,k};
                }
            }
        }
        return {};
    }
};