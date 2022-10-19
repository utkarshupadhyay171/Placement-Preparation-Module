class Solution {
public:
    int maximumProduct(vector<int>&a) 
    {
        sort(a.begin(),a.end(),greater<int>());
        int ans=1;
        int n=a.size();
        for(int i=0;i<3;i++)
            ans*=a[i];
        ans=max(ans,a[n-1]*a[n-2]*a[0]);
        return ans;
        
    }
};