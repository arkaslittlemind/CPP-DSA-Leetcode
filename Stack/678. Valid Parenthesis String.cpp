Question Link- https://leetcode.com/problems/valid-parenthesis-string/

//Using Stack//

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> s1;
        stack<int> s2;
         for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                s1.push(i);
            if(s[i]=='*')
                s2.push(i);
            if(s[i]==')'){
                if(s1.size()==0 && s2.size()==0)
                    return false;
                else if(s1.size()==0)
                    s2.pop();
                else
                    s1.pop();
            }
        }
        if(s1.size()==0)
            return true;
        while(s2.size()!=0){
             if(s1.size()==0)
                return true;
            else if(s1.top()<s2.top()){
                s1.pop();
                s2.pop();
            }
             
            else if(s1.top()>s2.top())
                return false;
          
        }
        if(s1.size()==0)
        return true;
        else
            return false;
    }
};
