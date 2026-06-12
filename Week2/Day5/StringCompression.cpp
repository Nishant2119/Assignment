class Solution {
public:
    int compress(vector<char>& chars) 
    {
        string ans;
        char prev=chars[0];
        int freq=0;
        for (char x: chars)
        {
            if(x==prev)
            {
                freq++;
            }
            else if(x!=prev)
            {
                ans+=prev;
                if(freq>1)ans+= to_string (freq);
                prev=x;
                freq=1;
            }
            
        }
        ans+=prev;
        if(freq>1)ans+= to_string (freq);
        for (int i =0;i<ans.length();i++)
        {
            chars [i] = ans [i];
        }
        return ans.length();
    }
};