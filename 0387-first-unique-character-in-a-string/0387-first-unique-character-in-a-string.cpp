class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int>map;
        int n=s.size();
        for(int i=0;i<n;i++)
            map[s[i]]+=1;
        for(int i=0;i<n;i++)
            if(map[s[i]]==1)
                return i;
        return -1;
        
    }
};