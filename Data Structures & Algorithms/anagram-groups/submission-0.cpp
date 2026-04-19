class Solution {
public:
    bool f(string a,string b)
    {
        if(a.size()!=b.size()) return false;

        vector<int> freq(26,0);
        for(int i=0;i<a.size();i++)
        {
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }
        for(auto f: freq)
        {
            if(f) return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n=strs.size();
        sort(strs.begin(),strs.end(),[](const string& a,const string&b){
            return a.size()<b.size();
        });
        vector<vector<string>> res; 
        unordered_set<string> s;
        for(int i=0;i<n;i++)
        {
            if(s.find(strs[i])==s.end())
            {
            vector<string> temp;
            temp.push_back(strs[i]);
            s.insert(strs[i]);
            for(int j=i+1;j<n;j++)
            {
                if(f(strs[i],strs[j]))
                {
                    temp.push_back(strs[j]);
                    s.insert(strs[j]);
                }
            }
            res.push_back(temp);
            }
        }
        return res;
    }
};
