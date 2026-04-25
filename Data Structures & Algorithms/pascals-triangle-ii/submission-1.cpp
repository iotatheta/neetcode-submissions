class Solution {
private:
    long nCr(int n,int r)
    {
        long res=1;
        for(int i=1;i<=r;i++)
        {
            res=(long)res*(n-i+1)/i;
        }
        return res;
    }
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++)
        {
            ans.push_back((int)nCr(rowIndex,i));
        }    
        return ans;
    }
};