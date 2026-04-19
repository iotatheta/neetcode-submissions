class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=0,maxi=0;
        for(auto it:nums)
        {
            if(it)
                cnt++;
            else
                cnt=0;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};