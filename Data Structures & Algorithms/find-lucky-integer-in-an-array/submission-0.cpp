class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int maxi=-1;
        vector<int> freq(501,0);
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }    
        for(int i=1;i<=500;i++)
        {
            if(freq[i]==i)
                maxi=max(maxi,i);
        }
        return maxi;
    }
};