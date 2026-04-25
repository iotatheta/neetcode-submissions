class Solution {
private:
    bool isSorted(vector<int>& arr)
    {
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<arr[i-1])
                return false;
        }
        return true;
    }
public:
    bool isMonotonic(vector<int>& nums) 
    {
        bool f=isSorted(nums);
        reverse(nums.begin(),nums.end());
        f|=isSorted(nums);
        return f;    
    }
};