class Solution {
public:
    int searchInsert(vector<int>&a, int t)
    {
        int ans=-1;
        int i=0;
        int n=a.size()-1;
        
        while(i<=n)
        {
            int mid=(i+n)/2;
            if(a[mid]==t)
                return mid;
            if(a[mid]<t)
                i=mid+1;
            else
                n=mid-1;
        }
        return n+1;
            
    }
};