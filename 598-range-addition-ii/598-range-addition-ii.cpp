class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>&o) 
    {
        int x=INT_MAX;
        int y=INT_MAX;
        int p=o.size();
        if(p==0) return m*n;
        for(int i=0;i<p;i++)
        {
            x=min(x,o[i][0]);
            y=min(y,o[i][1]);
        }
        return x*y;
    }
};