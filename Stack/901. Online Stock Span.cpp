Question Link- https://leetcode.com/problems/online-stock-span/

//Using Stack//

class StockSpanner {
    stack<pair<int,int>> st;
    int index;
public:
    StockSpanner() {
        
        index=-1;
    }
    
    int next(int price) {
        index+=1;
        while(!st.empty() && st.top().second<=price)
            st.pop();
        
        if(st.empty()){
            st.push({index,price}); 
                return index+1;
        }
        int result=st.top().first;
        st.push({index,price});
        return index - result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
