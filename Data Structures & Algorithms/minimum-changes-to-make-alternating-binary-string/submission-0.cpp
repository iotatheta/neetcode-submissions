class Solution {
private:
    int flips(string s,char ch)
    {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=ch) cnt++;
            if(ch=='1') ch='0';
            else ch='1';
        }
        return cnt;
    }
public:
    int minOperations(string s) 
    {
        return min(flips(s,'0'),flips(s,'1'));
    }
};