class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
       string s="balloon";
       vector<int> freqs(26,0),freqt(26,0);
       for(int i=0;i<s.size();i++)
       {
            freqs[s[i]-'a']++;
       }
       for(int i=0;i<text.size();i++)
       {
            if(s.find(text[i])!=string::npos)
            {
                freqt[text[i]-'a']++;
            }
       } 
       int mini=INT_MAX;
       for(int i=0;i<26;i++)
       {
            if(s.find((char)(i+'a'))!=string::npos)
            {
                mini=min(mini,freqt[i]/freqs[i]);
            }
       }
       return mini;
    }
};