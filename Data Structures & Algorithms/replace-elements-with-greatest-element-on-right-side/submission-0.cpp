class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector<int> ans;
        int n=arr.size();
        priority_queue<int> pq;
        for(int i=n-1;i>=0;i--)
        {
            if(pq.empty())
                ans.push_back(-1);
            else
                ans.push_back(pq.top());
            
            pq.push(arr[i]);
        }    
        reverse(ans.begin(),ans.end());
        return ans;
    }
};