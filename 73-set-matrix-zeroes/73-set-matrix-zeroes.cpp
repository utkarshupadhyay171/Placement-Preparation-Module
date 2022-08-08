class Solution {
public:
    void setZeroes(vector<vector<int>>& m) 
    {
        int ans[m.size()][m[0].size()];
        int x=m.size();
        int y=m[0].size();
        
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                ans[i][j]=-999;
            }
        }
        
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(m[i][j]==0)
                {
                    for(int k=0;k<y;k++)
                        ans[i][k]=0;
                    for(int k=0;k<x;k++)
                        ans[k][j]=0;
                }
                
            }
        }
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(ans[i][j]==0)
                    m[i][j]=0;
            }
        }
    }
};