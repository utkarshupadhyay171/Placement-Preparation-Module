class Solution {
public:
    bool check(char s)
    {
        s=tolower(s);
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
            return true;
        return false;
    }
    
    string reverseVowels(string s)
    {
        int i=0;
        int n=s.size()-1;
      
        while(i<n)
        {
            if( check(s[i]) && check(s[n]) )
                swap(s[i++],s[n--]);
            else if( check(s[i]) )
            {
                n--;
            }
            else 
            {
                i++;
            }
        }
        return s;
    }
};