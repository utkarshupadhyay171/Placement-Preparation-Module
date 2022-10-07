class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char>map,b;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(map.find(s[i])==map.end()&&b.find(t[i])==b.end())
            {
                map[s[i]]=t[i];
                b[t[i]]=t[i];
            }
            
            else
            {
                if(map[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
            
    }
};