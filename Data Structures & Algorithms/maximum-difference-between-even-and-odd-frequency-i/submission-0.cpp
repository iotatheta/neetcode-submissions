class Solution {
public:
    int maxDifference(string s) 
    {
        int n=s.size();
        vector<int> freq(26,0);
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }    
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(freq[i]&1)
                maxi=max(maxi,freq[i]);
            else if(freq[i])
                mini=min(mini,freq[i]);
        }
        return maxi-mini;
    }
};