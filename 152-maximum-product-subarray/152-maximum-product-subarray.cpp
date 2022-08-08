class Solution {
public:
    int maxProduct(vector<int>&a) 
    {
        int n=a.size();
        int curr=1;
        int prod=INT_MIN;
        for(int i=0;i<n;i++)
        {
            curr*=a[i];
            prod=max(curr,prod);
            if(curr==0)
                curr=1;
        }
        curr=1;
        for(int i=n-1;i>=0;i--)
        {
            curr*=a[i];
            prod=max(prod,curr);
            if(curr==0)
                curr=1;
        }
        return prod;
    }
};