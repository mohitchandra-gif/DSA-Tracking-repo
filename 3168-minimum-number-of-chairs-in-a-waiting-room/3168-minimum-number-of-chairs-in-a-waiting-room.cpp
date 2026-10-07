class Solution {
public:
    int minimumChairs(string s) {
        int m = 0;
        int ans = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'E') {
                m++;
                ans = max(ans, m);
            }
            else {
                m--;
            }
        }

        return ans;
    }
};