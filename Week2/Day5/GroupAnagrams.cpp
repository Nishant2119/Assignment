class Solution {
public:
    string generate(string &str)
    {
        int arr[26]={0};
        for(char x:str)
        {
            arr[x-'a']++;
        }
        string result;
        for (int i =0;i<26;i++)
        {
            int freq=arr[i];
            if(freq>0)
            result+= string(freq,i+'a');
        }
        return result;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        for (string x:strs)
        {
            string temp = generate(x);
            mp[temp].push_back(x);
           
        }
         for (auto &it : mp)
            {
                result.push_back(it.second);
            }
        return result;
    }
};