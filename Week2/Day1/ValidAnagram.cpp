class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length()) return false;
        map<char,int> mymap;
        for(char x : s)
        {
            if(mymap.find(x)==mymap.end())
            {
                mymap[x]=1;
            }
            else 
            {
                mymap[x]=mymap[x]+1;
            }
        }
        for(char y : t)
        {
            if(mymap.find(y)==mymap.end()||mymap[y]==0)
            {
                return false;
            }
            mymap[y]--;
        }
        return true;
    }
};