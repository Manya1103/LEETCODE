class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m = nums.size();
        int n = m / 2;
        /* pigeonhole principle- If objects > categories, at least one category
         has ≥ 2 objects.
         - gurantees a solution */

        // for (int i = 0; i < m - 2; i++) { // i < m-2 because of i+2
        //     /* One element appears n times in 2n array, so two occurrences must
        //      be within distance ≤ 2 */
        //     if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2]) {
        //         return nums[i];
        //     }
        // }
        // return nums[m - 1]; // fallback for last element (as the solution is
        //                     // guaranteed)
        // // didn't return nums[m - 2] because already compared with nums[m-3] &
        // // nums[m-4]

        /* using hash map -
        stores data in key value pairs
        always use some extra space */

        // count the no of occurences of each element & if its more than one or
        // equals to n then return that element
        unordered_map<int, int> freq;
        // declared a hash map named freq that stores int type key value pair
        for (int x : nums) {
            freq[x]++; // intialize x with 0 & then increment with 1
            if (freq[x] > 1 || freq[x] >= n) {
                return x;
            }
        }
        return -1; 
    }
};
