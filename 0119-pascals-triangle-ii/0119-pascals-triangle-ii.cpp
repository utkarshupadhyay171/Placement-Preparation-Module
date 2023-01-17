class Solution {
public:
    vector<int> getRow(int n) 
    {
        vector<vector<int>>ans;
        for(int i=0;i<=n;i++)
        {
            vector<int>t;
            for(int j=0;j<=i;j++)
                t.push_back(1);
            ans.push_back(t);
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j-1>=0)
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
            
        }
        vector<int>a;
        for(int i=0;i<=n;i++)
            a.push_back(ans[n][i]);
        return a;
    }
};