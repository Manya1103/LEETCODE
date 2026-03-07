class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s = s + s; // now every rotation is a substring of s
        int op1 = 0;
        int op2 = 0;
        int ans = INT_MAX;
        for (int i = 0; i <  2 * n; i++) {
            if (s[i] != (i % 2 ? '1' : '0'))
                op1++; // 01010... pattern
            if (s[i] != (i % 2 ? '0' : '1')) {
                op2++; // 10101... pattern
            }
            if (i >= n) {
                if (s[i - n] != ((i - n) % 2 ? '1' : '0'))
                    op1--;
                if (s[i - n] != ((i - n) % 2 ? '0' : '1'))
                    op2--;
            }
        
        if (i >= n - 1) {
            ans = min(ans, min(op1, op2));
        }
        }
        return ans;
    }
};