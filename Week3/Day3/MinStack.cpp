class MinStack {
public:
    stack<int> st;
    stack<int> min;
    MinStack() 
    {
        
    }
    
    void push(int value) {
        if(min.empty() || value <= min.top())
        {
            min.push(value);
        }
        st.push(value);
    }
    
    void pop() 
    {
        if(!st.empty() && st.top()== min.top())
        {
            min.pop();
        }
        st.pop();
    }
    
    int top() 
    {
        if(!st.empty()) return st.top();
        return 0;
    }
    
    int getMin() 
    {
       if(!min.empty()) return min.top();
       return 0;
    }
};