class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int n=s.size();
        int m=t.size();
        if(n==0&&m==0)
            return true;
        int i=0;
        int j=0;
        while(j<m)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            if(i==n)
                return true;
            if(s[i]!=t[j])
                j++;
        }
        return false;
    }
};