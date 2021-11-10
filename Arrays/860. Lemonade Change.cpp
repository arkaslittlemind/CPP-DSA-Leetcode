Question Link- https://leetcode.com/problems/lemonade-change/

//Brute Force Approach//

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int m=0, n=0;
        for(auto &i:bills){
            switch(i){
                case 5: m++; break;
                case 10: m--, n++; break;
                default: if(n) n--, m--;
                    else m-=3;
            }
             if(m < 0 || n < 0) return false;
                    
            }
       return true;  
    }
};
