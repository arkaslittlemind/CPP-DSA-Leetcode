Question Link- https://leetcode.com/problems/valid-parentheses/

// Using Stack//

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
             if(s[i]=='(' || s[i]=='{' || s[i] == '[') st.push(s[i]);
            else{
                if(st.size()==0) return false;
                char ch = st.top();
                st.pop();
                if((s[i] == ')' && ch == '(') or  (s[i] == ']' && ch == '[') || (s[i] == '}' && ch == '{')) continue;
                else return false;
            }
        }
        return st.empty();
    }
};
