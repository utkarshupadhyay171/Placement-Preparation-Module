class Solution {
public:
    double findMaxAverage(vector<int>&a, int k) 
    {
        int n=a.size();
        double ans=INT_MIN;
        double t=0;
        for(int i=0;i<k;i++)
        {
            t+=a[i];
        }
        ans=max(ans,t/k);
        for(int i=k;i<n;i++)
        {
            t-=a[i-k];
            t+=a[i];
            ans=max(ans,t/k);
        }
        return ans;
        
    }
};