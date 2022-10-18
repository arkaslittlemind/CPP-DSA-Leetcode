class Solution {
private:
    bool stringMatching(char a, char b){
        return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }
public:
    bool isValid(string x) {
        stack<int> st;
        for(int i = 0; i < x.length(); i++){
            if(x[i] == '(' || x[i] == '{' || x[i]  == '[')
                st.push(x[i]);
                
            else {
                if(st.empty() == true)
                    return false;
                    
                else if(stringMatching(st.top(), x[i]) == false)
                    return false;
                    
                else
                    st.pop();
            }
        }
        return(st.empty() == true);
    }
};