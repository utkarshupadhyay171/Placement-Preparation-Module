class Solution {
public:
    string longestCommonPrefix(vector<string>&s)
    {
        if(s.size()==0)return "";
        sort(s.begin(),s.end());
        string ans="";
        int l=s[0].size();
        int m=s[s.size()-1].size();
        string x=s[0];
        string y=s[s.size()-1];
        for(int i=0;i<l;i++)
        {
            if(x[i]==y[i])
                ans+=x[i];
            else
                break;
        }
        return ans;
        
    }
};