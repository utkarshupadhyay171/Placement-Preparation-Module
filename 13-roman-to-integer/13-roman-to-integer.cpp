class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char,int>map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int n=s.size();
        int ans=map[s[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(map[s[i]]>=map[s[i+1]])
                ans+=map[s[i]];
            else
                ans-=map[s[i]];
        }
        return ans;
    }
};