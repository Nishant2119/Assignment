class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<int,int> datamap;
        for(int i =0;i<s.length();i++)
        {
            if(datamap.find(s[i])==datamap.end())
            {
                datamap[s[i]]=1;
            }
            else 
            {
                datamap[s[i]]++;
            }
        }
        for (int i =0;i<s.size();i++)
        {
            if(datamap[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};