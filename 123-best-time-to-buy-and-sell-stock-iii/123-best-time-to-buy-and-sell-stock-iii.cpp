class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxp=0;
        int l=prices.size()-1;
        
        int sellp=prices[l];
        
        int ans[l+1];
        for(int i=0;i<=l;i++)
            ans[i]=0;
        
        for(int i=l-1;i>=0;i--)
        {
            
            if(prices[i]>sellp)
                sellp=prices[i];
            
            else
            {
                maxp=max(maxp,sellp-prices[i]);
            }
            ans[i]=maxp;
        }
        
        int minp=0;
        int costp=prices[0];
        
        for(int i=1;i<=l;i++)
        {
            if(prices[i]<costp)
                costp=prices[i];
            else
                minp=max(minp,prices[i]-costp+ans[i]);
            ans[i]=minp;
        }
        return ans[l];
        
    }
};