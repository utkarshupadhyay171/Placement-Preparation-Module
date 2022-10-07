class Solution {
public:
    vector<string> findRelativeRanks(vector<int>&p) 
    {
        vector<int>a=p;
        int n=a.size();
        int x=INT_MIN,y=INT_MIN,z=INT_MIN;
        vector<string>ans;
        unordered_map<int,string>map;
        for(int i=0;i<n;i++)
        {
            if(x==a[i]||y==a[i]||z==a[i])
                continue;
            if(x<a[i])
            {
                z=y;
                y=x;
                x=a[i];
            }
            else if(y<a[i])
            {
                z=y;
                y=a[i];
            }
            else if(z<a[i])
                z=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                map[a[i]]="Gold Medal";
            else if(a[i]==y)
                map[a[i]]="Silver Medal";
            else if(a[i]==z)
                map[a[i]]="Bronze Medal";
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=x&&a[i]!=y&&a[i]!=z)
                map[a[i]]=to_string(n-i);
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(map[p[i]]);
        }
        return ans;
        
    }
};