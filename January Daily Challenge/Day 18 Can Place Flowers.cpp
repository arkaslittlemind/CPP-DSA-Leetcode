Question Link- https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
        int sz=f.size();
        
        if(n==0) return true;
       
        if(sz==1 && f[0]==0 && n==1) return true;
        
        for(int i=0;i<sz;i++){
            
            if(f[i]==0){
                
                if(i==0){
                    if(f[i+1]!=1) {f[i]=1;n--;}
                }
                
                else if(i==sz-1){
                    if(f[i-1]!=1) {f[i]=1;n--;}
                }
               
                else{
                    if(f[i+1]!=1 && f[i-1]!=1) {f[i]=1;n--;}
                }
            }
        }
        
        return n<=0;
    }
};
