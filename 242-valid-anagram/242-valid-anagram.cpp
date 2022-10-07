class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>m,n;
        int l=s.size();
        int k=t.size();
        for(int i=0;i<l;i++)
        {
            m[s[i]]+=1;
        }
        for(int i=0;i<k;i++)
        {
            n[t[i]]+=1;
        }
        if(k>l)
        {
            for(int i=0;i<max(l,k);i++)
            {
                if(n[t[i]]!=m[t[i]])
                    return false;
            }
        }
        else
        {
            for(int i=0;i<max(l,k);i++)
            {
                if(n[s[i]]!=m[s[i]])
                    return false;
            }
        }
        return true;
    }
};