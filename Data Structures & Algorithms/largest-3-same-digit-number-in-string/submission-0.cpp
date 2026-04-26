class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int maxi=INT_MIN;
        string ans="";
        for(int i=0;i<=num.size()-3;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                string s=num.substr(i,3);
                int x=stoi(s);
                if(x>maxi)
                {
                    ans=s;
                    maxi=x;
                }
            }
        }    
        return ans;
    }
};