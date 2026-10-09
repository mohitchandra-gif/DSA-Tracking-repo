
class Solution {
public:
    int minimumSum(int num) {
        string n = to_string(num);
        sort(n.begin(), n.end());

        string ans1, ans2;

        for (int i = 0; i < n.size(); i++) {
            if (i % 2 == 0) {
                ans1.push_back(n[i]);
            } else {
                ans2.push_back(n[i]);
            }
        }

        return stoi(ans1) + stoi(ans2);
    }
};
