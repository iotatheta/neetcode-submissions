class Solution {
public:
    int f(int ind1,int ind2,string s,string t)
    {
        if(ind1<0 || ind2<0) 
            return 0;
        if(s[ind1]==t[ind2])
        {
            return 1+f(ind1-1,ind2-1,s,t);
        }
        return max(f(ind1-1,ind2,s,t),f(ind1,ind2-1,s,t));
    }
    bool isSubsequence(string s, string t) 
    {
        int n=s.size(),m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m]==s.size();
    }
};