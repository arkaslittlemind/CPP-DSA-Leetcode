Question Link- https://leetcode.com/problems/coin-change/

//Brute Force Approach//

vector<int> v(amount+1,amount+1);
        v[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto c:coins){
                if(i>=c) v[i]=min(v[i],v[i-c]+1);
            }
        }
        return v.back()>amount ? -1 : v.back(); 
