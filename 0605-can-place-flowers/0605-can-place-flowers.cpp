class Solution {
public:
    bool canPlaceFlowers(vector<int>&f, int n) 
    {
        int l=f.size();
        vector<int>t;
        t.push_back(0);
        for(int i=0;i<l;i++)
            t.push_back(f[i]);
        t.push_back(0);
        for(int i=1;i<=l;i++)
        {
            if(t[i-1]==0&&t[i+1]==0&&t[i]==0)
            {
                t[i]=1;
                n--;
            }
            if(n<=0)
                return true;
        }
        return false;
    }
};