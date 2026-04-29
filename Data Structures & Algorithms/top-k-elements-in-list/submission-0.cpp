class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int& a,int& b)
        {
            return mp[a]>mp[b];
        });
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])==s.end())
            {
                ans.push_back(nums[i]);
                k--;
            }
            if(k==0)
                break;
            s.insert(nums[i]);
        }
        return ans;
    }
};
