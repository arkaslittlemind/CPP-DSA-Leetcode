Question Link- https://leetcode.com/problems/design-a-stack-with-increment-operation/
  
class CustomStack {
    int *arr;
    int top;
    int capacity;
public:
    CustomStack(int maxSize) {
        arr = new int[maxSize];
        top = 0;
        capacity = maxSize;
    }
    
    void push(int x) {
        if(top == capacity){
            return;
        }
        arr[top] = x;
        top++;
    }
    
    int pop() {
        if(top == 0){
            return -1;
        }
        int temp = arr[top - 1];
        top--;
        return temp;
    }
    
    void increment(int k, int val) {
		
        int n = (k >= top) ? top : k;
        for(int i = 0; i < n; i++){
            arr[i]  = arr[i] + val;
        }
    }
};
