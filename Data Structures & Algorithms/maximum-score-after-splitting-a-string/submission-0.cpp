class Solution {
public:
    int maxScore(string s) 
    {
        int cnt1=0,cnt0=0;
        for(int i=0;i<s.size();i++)
        {
            cnt1+=(s[i]-'0');
        }    
        int maxi=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
                cnt0++;
            else
                cnt1--;
            maxi=max(maxi,cnt0+cnt1);
        }
        return maxi;
    }
};