Question Link- https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>minh;
    int a;
    KthLargest(int k, vector<int>& nums) {
         a=k;
        for(auto i:nums)
            add(i);
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>a)
        {
            minh.pop();
        }
        return minh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
