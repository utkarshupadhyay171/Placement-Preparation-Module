class Solution {
public:
    int findLHS(vector<int>&a) 
    {
        sort(a.begin(),a.end());
        int n=a.size();
        int l=0;
        int r=1;
        int ans=0;
        while(r<n)
        {
            if(a[r]-a[l]==1)
            {
                ans=max(ans,r-l+1);
                r++;
            }
            else if(a[r]-a[l]<=1)
                r++;
            else
                l++;
        }
        return ans;
    }
};