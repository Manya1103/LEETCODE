class Solution {
public:
    int binaryGap(int n) {
        int longest = 0;
        bool one_found = false;
        int cur = 0;
        while(n){
            if(n&1){
                longest = max(longest,cur);
                one_found=true;
                cur=1;
            }
            else{
                if(one_found){
                    ++cur;
                }
            }
            n>>=1;
        }
        return longest;
    }
};