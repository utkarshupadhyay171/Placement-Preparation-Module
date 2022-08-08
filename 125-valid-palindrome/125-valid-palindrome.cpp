class Solution {
public:
    bool isPalindrome(string s) 
    {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    s1+=s[i]+32;
                }
                else
                    s1+=s[i];
            }
        }
        int i=0;
        int l=s1.size()-1;
        while(i<l)
        {
            if(s1[i]!=s1[l])
                return false;
            i++;
            l--;
        }
        return true;
    }
};