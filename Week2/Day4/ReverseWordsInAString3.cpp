class Solution {
public:
    string reverseWords(string s) 
    {
        stack<char> st;
        string result;
        for(int i =0;i<=s.length();i++)
        {
            if(s[i] == ' '||s.length()==i)
            {
                while(!st.empty())
                {
                    result+=st.top();
                    st.pop();
                }
                if(i!=s.length())result += ' ';
            }
            else 
            {
                st.push(s[i]);
            }
        }
        return result;

    }
};