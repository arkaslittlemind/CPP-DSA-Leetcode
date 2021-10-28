Question Link- https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

//SLiding Window Approach//

class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int ans=0, n=s.size();
        int cntF=0,l=0;
        //l is the left pointer of our consecutive characters 
        
        //checking for consecutive T's
        for(int i=0;i<n;i++){
            if(s[i]=='F')  cntF++;
            
            while(cntF>k){
                if(s[l]=='F') cntF--;
                l++;
            }
            
            ans=max(ans,i-l+1);
        }
        
         //checking for consecutive F's
        int cntT=0;l=0;
         for(int i=0;i<n;i++){
            if(s[i]=='T')  cntT++;
            
            while(cntT>k){
                if(s[l]=='T') cntT--;
                l++;
            }
            
            ans=max(ans,i-l+1);
        }
        
        return ans;
    }
};
