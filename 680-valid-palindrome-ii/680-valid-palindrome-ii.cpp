class Solution {
public:
    
    bool isvalid(string s,int i,int end)
    {
        while(i<end)
        {
            if(s[i]!=s[end])
            {
                return false;
            }
            i++;
            end--;
        }
        return true;
    }
    
    bool validPalindrome(string s) 
    {
        int i=0;
        int end=s.size()-1;
        while(i<end)
        {
            if(s[i]==s[end])
            {
                i++;end--;
            }
            else
            {
                return isvalid(s,i+1,end)||isvalid(s,i,end-1);
            }
        }
        return true;
    }
};