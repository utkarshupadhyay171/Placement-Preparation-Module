class Solution {
public:
    int titleToNumber(string s) 
    {
        unordered_map<char,int>map;
        for(int i=1;i<=26;i++)
        {
            map['A'+i-1]=i;
        }
        int sum=0;
        long long x=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            sum+=map[s[i]]*x;
            x=x*26;
        }
        return sum;
    }
};