class Solution {
public:
    string interpret(string command) {
        string s = "";

        for(int i = 0; i < command.length(); i++) {

            if(command[i] == 'G') {
                s.push_back('G');
            }
            else if(command[i] == '(' && command[i+1] == ')') {
                s.push_back('o');
                i++;
            }
            else if(command[i] == '(' && command[i+1] == 'a') {
                s += "al";
                i += 3;
            }
        }

        return s;
    }
};