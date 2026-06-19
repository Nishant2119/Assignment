class RecentCounter {
public:
    queue<int> myq;
    RecentCounter() {
        
    }
    
    int ping(int t) 
    {
       while(!myq.empty() && (t-myq.front()) > 3000)
       {
            myq.pop();
       }
       myq.push(t);
       return myq.size();
    }
};