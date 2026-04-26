class Solution {
public:
    bool isPathCrossing(string path) 
    {
        unordered_set<string> s;
        int x=0,y=0;
        s.insert("0,0");
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='N')
                y--;
            else if(path[i]=='S')
                y++;
            else if(path[i]=='E')
                x++;
            else
                x--;
            string pos=to_string(x)+","+to_string(y);
            if(s.find(pos) != s.end())
                return true;
            s.insert(pos);
        }    
        return false;
    }
};