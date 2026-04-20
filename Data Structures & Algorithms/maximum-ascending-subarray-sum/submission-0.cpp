class Solution {
public:
    int msum(vector<int>& arr)
    {
        int maxi=arr[0],sum=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]<arr[i])
                sum+=arr[i];
            else
                sum=arr[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
    int maxAscendingSum(vector<int>& nums) 
    {
        return msum(nums);
    }
};