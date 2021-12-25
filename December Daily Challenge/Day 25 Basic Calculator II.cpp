Question Link- https://leetcode.com/problems/basic-calculator-ii/

class Solution {
public:
    int calculate(string s) {
        int total = 0;
        long long last = 0, last_result = 1;
        char last_operator = '+';
        
        if(s.size() < 1) return total;
        
        int i = 0, sign = 1;
        
        while(i < s.size()) {
            if(s[i] == ' ') {
                ++i;
                continue;
            }
            if(s[i] == '+' || s[i] == '-') {
                total += last_result * sign;
                sign = s[i++] == '+' ? 1 : -1;
                    last_result = 1;
                last_operator = '+';
            }
            else if(s[i] == '/' || s[i] == '*') {
                last_operator = s[i];
                i++;
            }
            
            if(isdigit(s[i])) {
                last = 0;
                while(i < s.size() && isdigit(s[i])) {
                    last = last * 10 + s[i] - '0';
                    i++;
                }
                if(last_operator == '*') last_result *= last;
                else if(last_operator == '/') last_result /= last;
                
                else last_result = last;
            }
        }
        total += last_result * sign;
        return total;
    }
};
