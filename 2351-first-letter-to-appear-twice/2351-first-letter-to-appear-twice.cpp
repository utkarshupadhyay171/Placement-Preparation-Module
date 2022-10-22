class Solution {
public:
    char repeatedCharacter(string s)
    {
        unordered_map<char,int>map;
        int n=s.size();
        char a='a';
        for(int i=0;i<n;i++)
        {
            map[s[i]]+=1;
            if(map[s[i]]==2)
                return s[i];
        }
        return a;
    }
};