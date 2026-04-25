class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto num : nums)
        {
            ans+=mp[num];
            mp[num]++;
        }    
        return ans;
    }
};