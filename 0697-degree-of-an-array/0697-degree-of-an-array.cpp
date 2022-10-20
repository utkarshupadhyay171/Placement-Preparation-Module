class Solution {
public:
    int findShortestSubArray(vector<int>&a) 
    {
        unordered_map<int,int>first,last,c;
        int n=a.size();
        int mf=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(first.find(a[i])==first.end())
                first[a[i]]=i;
            last[a[i]]=i;
            c[a[i]]++;
            mf=max(mf , c[a[i]] );
        }
        int ml=INT_MAX;
        for(auto i:c)
        {
            if(i.second==mf)
            {
                ml=min(ml,last[i.first]-first[i.first]+1);
            }
        }
        return ml;
        
        
        
        
    }
};