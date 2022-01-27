Question Link- https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/

class Solution {
public:
    struct node{
        // val at the leaf is value of path from root to leaf
        int val;
        // two links, 0 and 1, for each bit
        struct node* link[2];
        node(){
            val=0;
            link[0]=link[1]=NULL;
        }
    };
    struct node* start=new node();
    
    void insertTrie(int x){
    	// straightforward insertion from msb to lsb
        struct node* ptr=start;
        for(int i=31;i>=0;i--){
            bool curbit=(x&(1<<i));
            if(ptr->link[curbit]==NULL)
                ptr->link[curbit]=new node();
            ptr=ptr->link[curbit];
        }
        ptr->val=x;
    }
    
    int checkTrie(int x){
    	// checking from msb to lsb(least significat bit)
        struct node* ptr=start;
        for(int i=31;i>=0;i--){
            bool curbit=(x&(1<<i));
            // if curbit is 1,see if we can have a number with that bit 0 to maximize the xor
            if(ptr->link[1-curbit]!=NULL)
                ptr=ptr->link[1-curbit];
            // if not then proceed with curbit
            else if(ptr->link[curbit]!=NULL)
                ptr=ptr->link[curbit];
        }
        return ptr->val;    
    }
    int findMaximumXOR(vector<int>& nums) {
        int ans=0,n=nums.size();
        if(nums.size()<2) return 0;
        insertTrie(nums[0]);
        for(int i=1;i<n;i++){
        	// for nums[i], we are finding element in nums[0 to i-1] with which it's xor will be max
            ans=max(ans,nums[i]^checkTrie(nums[i]));
            // add nums[i] to the trie
            insertTrie(nums[i]);
        }
        return ans;
    }
};
