class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& a, int k, int t) 
    {
        int n=a.size();
        vector<pair<long long,int>>v(n);
        for(int i=0;i<a.size();i++)
        {
            v[i].first=a[i];
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if( abs(v[j].first-v[i].first) <=(long long)t )
                {
                    if(abs(v[i].second-v[j].second)<=k)
                        return true;
                }
                else 
                    break;
            }
        }
        return false;
    }
};