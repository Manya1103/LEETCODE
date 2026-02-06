class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int i = 0; int j = n - 1;
        int count = 0;
        int minimum = 0;
        while(i <= j){
            if(nums[j] <= nums[i] * k){
                return count;
            } else if(nums[j] > nums[i] * k ){
                count++;
                // i++;
                j--;
                minimum = min(minimum, count);
                // i++;
            }
        }
        return count;
    }
};