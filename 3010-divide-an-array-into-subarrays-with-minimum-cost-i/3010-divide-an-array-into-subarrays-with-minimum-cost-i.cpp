class Solution {
public:
    int minimumCost(vector<int>& nums) {
         int n = nums.size();
        int first = nums[0];
        sort(nums.begin() + 1, nums.end());
        return nums[0] + nums[1] + nums[2];
    }
};