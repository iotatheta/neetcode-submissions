class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size();
        int j=0;
        for(j=0;j<n;j++)
        {
            if(nums[j]==val)
                break;
        }
        for(int i=j;i<n;i++)
        {
            if(nums[i]!=val)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return j;
    }
};