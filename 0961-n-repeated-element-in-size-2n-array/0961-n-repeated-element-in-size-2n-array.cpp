class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m = nums.size();
        int n = m / 2;
        /* pigeonhole principle- If objects > categories, at least one category
         has ≥ 2 objects.
         - gurantees a solution */

        for (int i = 0; i < m - 2; i++) {  // i < m-2 because of i+2
            /* One element appears n times in 2n array, so two occurrences must
             be within distance ≤ 2 */
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2]) {
                return nums[i];
            }
        }
        return nums[m - 1]; // fallback for last element (as the solution is guaranteed)
        // didn't return nums[m - 2] because already compared with nums[m-3] & nums[m-4]
    }
};