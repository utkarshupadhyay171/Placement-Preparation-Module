class Solution {
public:
    bool wordPattern(string p, string s)
    {
        unordered_map<char,string>map;
        unordered_map<string,int>map2;
        vector<string>v;
        stringstream ss(s);
        string w;
        while(ss>>w)
            v.push_back(w);
        if(p.size()!=v.size()) return false;
        int n=p.size();
        
        for(int i=0;i<n;i++)
        {
            if(map.find(p[i])==map.end())
            {
                if(map2.find(v[i])!=map2.end())
                    return false;
                map[p[i]]=v[i];
                map2[v[i]]=1;
            }
            
            else if(map[p[i]]!=v[i])
                return false;
            
        }
        return true;
            
            
    }
};