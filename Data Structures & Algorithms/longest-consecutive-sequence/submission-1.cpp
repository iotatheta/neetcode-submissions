class Solution {
private:
    int f(int ind,int n,int prev,vector<int>& nums,vector<vector<int>>& dp)
    {
        if(ind>=n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int len=0+f(ind+1,n,prev,nums,dp);
        if(prev==-1 || nums[prev]+1==nums[ind])
        {
            len=max(len,1+f(ind+1,n,ind,nums,dp));
        }
        return dp[ind][prev+1]=len;
    }
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        sort(nums.begin(),nums.end());
        return f(0,n,-1,nums,dp);
    }
};
