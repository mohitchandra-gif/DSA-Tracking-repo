class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> mp(26, ' ');

        char ch = 'a';

        for (char c : key) {
            if (c == ' ')
                continue;

            if (mp[c - 'a'] == ' ') {
                mp[c - 'a'] = ch;
                ch++;
            }
        }

        for (int i = 0; i < message.size(); i++) {
            if (message[i] != ' ') {
                message[i] = mp[message[i] - 'a'];
            }
        }

        return message;
    }
};