class Solution {
public:
    bool canConstruct(string a, string b) 
    {
        unordered_map<char,int>m1,m2;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<m;i++)
            m2[b[i]]+=1;
        for(int i=0;i<n;i++)
            m1[a[i]]+=1;
        
        for(int i=0;i<n;i++)
        {
            if(m2.find(a[i])==m2.end())
                return false;
            else
            {
                if(m1[a[i]]>m2[a[i]])
                    return false;
            }
                
        }
        return true;
    }
};