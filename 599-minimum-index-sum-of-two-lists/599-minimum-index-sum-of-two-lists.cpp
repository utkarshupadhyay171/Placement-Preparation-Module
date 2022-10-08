class Solution {
public:
    vector<string> findRestaurant(vector<string>&a, vector<string>&b) 
    {
        int n=a.size();
        int m=b.size();
        unordered_map<string,int>p,q;
        for(int i=0;i<n;i++)
        {
            if(p.find(a[i])==p.end())
                p[a[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            if(q.find(b[i])==q.end())
                q[b[i]]=i;
        }
        int mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(q.find(a[i])!=q.end())
            {
                mi=min(mi,p[a[i]]+q[a[i]]);
            }
        }
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            if(q.find(a[i])!=q.end())
            {
                if(p[a[i]]+q[a[i]]==mi)
                    ans.push_back(a[i]);
            }
                
        }
        return ans;
        
    }
};