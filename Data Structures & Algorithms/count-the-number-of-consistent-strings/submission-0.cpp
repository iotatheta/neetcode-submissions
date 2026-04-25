class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int c=0;
        for(auto word : words)
        {
            bool f=true;
            for(int i=0;i<word.size();i++)
            {
                if(allowed.find(word[i])==string::npos)
                {
                    f=false;
                    break;
                }
            }
            if(f)
                c++;
        }    
        return c;
    }
};