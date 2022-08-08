class Solution {
public:
    int maxProfit(vector<int>&v) 
    {
        int l=v.size()-1;
        int maxr=v[l];
        int maxp=0;
        
        for(int i=l-1;i>=0;i--)
        {
            if(v[i]>maxr)
            {
                maxr=v[i];
            }
            else
                maxp=max(maxp,(maxr-v[i]));
        }
        return maxp;
        
    }
};