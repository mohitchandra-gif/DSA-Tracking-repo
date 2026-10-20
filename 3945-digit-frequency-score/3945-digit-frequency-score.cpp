class Solution {
public:
    int digitFrequencyScore(int n) {
       string m = to_string(n);
    int sum = 0;

    for (int i = 0; i < m.length(); i++) {
        int q = m[i] - '0';
        sum += q;
    }
    return sum;
    }
};