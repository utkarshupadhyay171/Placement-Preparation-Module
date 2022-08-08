class Solution {
public:
    int trap(vector<int>&a) 
    {
        int n=a.size();
        int maxl[n],maxr[n];
        maxl[0]=a[0];maxr[n-1]=a[n-1];
        for(int i=1;i<n;i++)
            maxl[i]=max(maxl[i-1],a[i]);
        for(int i=n-2;i>=0;i--)
            maxr[i]=max(maxr[i+1],a[i]);
        
        int sum=0;
        for(int i=1;i<n-1;i++)
            sum+=min(maxl[i],maxr[i])-a[i];
        return sum;
        
    }
};