class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        unordered_set<string> st;
        for(int i = 0; i + k <= n; i++){
             st.insert(s.substr(i, k));
        }
        return st.size() == (int)pow(2, k);
    }
};


/*
Time Complexity: O(n * k)
Space Complexity: O(2^k * k)
*/