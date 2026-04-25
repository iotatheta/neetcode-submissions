class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=1;
        for(int i=1;i<2*n;i++)
        {
            if(nums[(i-1)%n]<=nums[i%n])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }

            if(cnt==n)
                return true;
        }
        return n==1;    
    }
};