class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>>dict;
        unordered_map<string,vector<string>>mp;
        for(auto str:strs)
        {
            string a=str;
            sort(a.begin(),a.end());
            mp[a].push_back(str);
        }
        
        for(auto x:mp)
        {
            vector<string>v=x.second;
            sort(v.begin(),v.end());
            dict.push_back(v);
        }
        sort(dict.begin(),dict.end());
        return dict;
    }
};
