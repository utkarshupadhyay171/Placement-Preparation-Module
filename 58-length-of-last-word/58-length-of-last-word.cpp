class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.size();
        int ans=0;
        bool t=false;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                ans+=1;
                t=true;
            }
            else if(s[i]==' '&&t)
                break;
        }
        return ans;
    }
};