********Not Optimal****************
int longestUniqueSubsttr(string s)
    {
        int n=s.size();
        unordered_map<char,int>mp;
        int i=0,j=0;
        int len=INT_MIN;
        
        while(j<n)
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
                len=max(len,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return len==INT_MIN?-1:len;
    }
/*You are using map from C++ STL which is implemented as a BST (Binary search tree), in which insertion & deletion take O(logn). Even if you use unordered_map (which is implemented using hashing) it takes O(n) in worst case [O(1) is average]. Ideally, you may use an array/vector of all characters/alphabet and work with that. Don't try to use unordered_map in the same implementation , I did the same and got TLE.*/
************************************
*****/Efficient Sol.*//////////
int longestUniqueSubsttr(string s)
    {
        vector<int>idx(256,-1);
        int left=0;
        int ans=INT_MIN;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(idx[s[i]-'a']!=-1)
            {
                left=max(idx[s[i]-'a']+1,left);
            }
            idx[s[i]-'a']=i;
            ans=max(ans,i-left+1);
        }
        
        return ans;
    }
