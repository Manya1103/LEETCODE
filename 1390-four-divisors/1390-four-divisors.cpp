class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int count = 0; // reset count for next element
            vector<int> divisors; // reset/clear divisors vector for next element
            // for (int j = 1; j <= nums[i]; j++) {  // 1 to i e.g- for 21,
            // check from 1 to 21
            for (int j = 1; j * j <= nums[i]; j++) { // optimized  (check till perfect square)
                if (nums[i] % j == 0) {
                    divisors.push_back(j);
                    count++;
                    if (j != nums[i] / j) { /* to add pairs like 2 & 18 for 2 * 18 =
                                       36 & avoid repetition (6 * 6 = 36 ) */
                        divisors.push_back(nums[i] / j);
                        count++;
                    }
                }
            }
            if (count != 4) {
                continue;
            } else if (count == 4) {
                for (int val : divisors) {
                    sum = sum + val;
                }
            }
        };
        return sum;
    }
};

// time complexity-  O(n × √m)
// space complexity- O(1)
