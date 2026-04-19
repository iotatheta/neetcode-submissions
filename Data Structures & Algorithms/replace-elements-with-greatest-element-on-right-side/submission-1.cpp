class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector<int> ans;
        int n=arr.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                ans.push_back(-1);
                st.push(arr[i]); 
            }
            else
            {
                ans.push_back(st.top());
                if(arr[i]>st.top())
                    st.push(arr[i]);
            }
        } 
        reverse(ans.begin(),ans.end());
        return ans;   
    }
};