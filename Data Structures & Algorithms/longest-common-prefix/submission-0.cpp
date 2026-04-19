class Solution {
public:
    string f(string a,string b)
    {   
        string res="";
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                res+=a[i];
                i++;
                j++;
            }
            else break;
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n=strs.size();
        string res=strs[0];
        for(int i=1;i<n;i++)
        {
            res=f(res,strs[i]);
        }    
        return res;
    }
};