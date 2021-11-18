Question Link- https://leetcode.com/problems/implement-queue-using-stacks/

//Using Input and Output Stack//

class MyQueue {
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
         if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();

        int temp = output.top();
        output.pop(); 
        return temp; 
    }
    
    int peek() {
          if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();
        return output.top(); 
    }
    
    bool empty() {
         return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

