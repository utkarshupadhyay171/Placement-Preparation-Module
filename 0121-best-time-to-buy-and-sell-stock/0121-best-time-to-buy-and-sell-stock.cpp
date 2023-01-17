class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int m=0;
        int ms=p[p.size()-1];
        for(int i=p.size()-2;i>=0;i--)
        {
            if(p[i]>ms)
                ms=p[i];
            else
                m=max(m,ms-p[i]);
        }
        return m;
        
    }
};