class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int>m1,m2;
        for(int i=0;i<n;i++)
            m1[s[i]]+=1;
        for(int i=0;i<m;i++)
            m2[t[i]]+=1;
        for(int i=0;i<m;i++)
        {
            if(m1.find(t[i])==m1.end())
                return t[i];
            if(m2[t[i]]-1==m1[t[i]])
                return t[i];
        }
        return 'a';
    }
};