class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s(nums.begin(),nums.end());
        int i=0,n=nums.size(),maxi=0;
        while(i<n)
        {
            int x=nums[i];
            if(s.find(x-1)==s.end())
            {
                int c=1;
                while(s.find(x+1)!=s.end())
                {
                    c++;
                    x++;
                }
                maxi=max(maxi,c);
            }  
            i++; 
        }   
        return maxi;
    }
};
