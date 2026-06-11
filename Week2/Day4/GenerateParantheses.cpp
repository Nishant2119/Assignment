class Solution {
public:
    vector<string> ans;
    void generator(string str,int open,int close)
    {
        if(open ==0 && close == 0)
        {
            ans.push_back(str);
        }
        if(open>0)
        {
            generator(str+"(",open-1,close);
        }
        if(close>open)
        {
            generator(str+")",open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        generator("",n,n);
        return ans;
    }
};