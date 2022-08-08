class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int l=s.size();
        int count=0;
        int c0=0;
        int c1=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R')
                c0+=1;
            if(s[i]=='L')
                c1+=1;
            if((c1==c0)&&(c1!=0&&c0!=0))
            {
                count+=1;
                c0=0;
                c1=0;
            }
            
        }
        return count;
    }
    
};