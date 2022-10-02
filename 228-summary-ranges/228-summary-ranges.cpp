class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) 
    {
        vector<string>ans;
        int n=a.size();
        if(n==0) return ans;
        int j=0,i;
        for(i=1;i<n;i++)
        {
            if(a[i-1]+1!=a[i])
            {
                string s;
                if(i-1==j)
                s=to_string(a[j]);
                else
                s=to_string(a[j])+"->"+to_string(a[i-1]);
                ans.push_back(s);
                j=i;
            }
        }
        string s;
        if(i-1==j)
        s=to_string(a[j]);
        else
        s=to_string(a[j])+"->"+to_string(a[i-1]);
        ans.push_back(s);
        
        return ans;
    }
};