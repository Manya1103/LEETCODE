class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        // int ops = 0;
        // 64 / 89 testcases passed
        // for(int i = 1; i < n; i++){
        // if(s[i] == '0' && s[i-1] == '0'){
        //     s[i] = '1';
        //     ops++;
        // } else if(s[i] == '1' && s[i-1] == '1'){
        //     s[i] = '0';
        //     ops++;
        // }

        // if(s[i] == s[i-1]){
        //     ops++;
        //     if(s[i] == '0'){
        //         s[i] = '1';
        //     } else {
        //         s[i] = '0';
        //     }
        // }
        // }
        // return ops;

        int op1 = 0;
        int op2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != (i % 2 ? '1' : '0'))
                op1++; // 01010... pattern
            if (s[i] != (i % 2 ? '0' : '1'))
                op2++; // 10101... pattern
        }
        return min(op1, op2);
    }
};