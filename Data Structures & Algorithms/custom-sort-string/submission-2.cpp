class Solution {
public:
    string customSortString(string order, string s) 
    {
        vector<int> freq(26,0);
        for(auto c : s)
        {
            freq[c-'a']++;
        }
        string res="";
        for(auto ch : order)
        {
            while(freq[ch-'a']-- > 0)
            {
                res+=ch;
            }
        }
        for(int i=0;i<26;i++)
        {
            while(freq[i]-- > 0)
            {
                res+=(i+'a');
            }
        }
        return res;
    }
};