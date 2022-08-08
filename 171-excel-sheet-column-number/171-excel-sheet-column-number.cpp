class Solution {
public:
    int titleToNumber(string s) 
    {
        unordered_map<char,int>map;
        for(int i=0;i<26;i++)
        {
            char c=i+65;
            map[c]=i+1;
        }
        
        int sum=0;
        long long x=1;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            sum+=map[s[i]]*x;
            x*=26;
        }
        
        return sum;
        
    }
};