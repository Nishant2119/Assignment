class MyQueue {
public:
    stack<int> first;
    stack<int> second;
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    void transfer()
    {
        if(second.empty())
        {
            while(!first.empty())
            {
                second.push(first.top());
                first.pop();
            }
        }
    }
    int pop() 
    {
        transfer();
       int upper =  second.top();
       second.pop();
       return upper;
    }
    
    int peek() 
    {
        transfer();
        return second.top();
    }
    
    bool empty() {
        if(first.empty() && second.empty()) return true;
        return false;
    }
};
