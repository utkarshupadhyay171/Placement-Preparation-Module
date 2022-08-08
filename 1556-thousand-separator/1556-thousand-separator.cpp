class Solution {
public:
    string thousandSeparator(int n) 
    {
        string s=to_string(n),s1;
        int count=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(count==3)
            {
                s1+=".";
                count=0;
            }
            s1+=s[i];
            count++;
            
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};