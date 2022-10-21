class Solution {
public:
    int pivotIndex(vector<int>&a) 
    {
        int n=a.size();
        int s=0;
        for(int i=0;i<n;i++)
            s+=a[i];
        int l=0;
        int r=s-a[0];
        if(l==r)
            return 0;
        for(int i=1;i<n;i++)
        {
            l+=a[i-1];
            r-=a[i];
            if(l==r)
                return i;
        }
        return -1;
    }
};