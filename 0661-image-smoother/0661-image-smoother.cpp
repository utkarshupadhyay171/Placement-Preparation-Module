class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>&a)
    {
        int dx[]={0,0,1,1,1,-1,-1,-1};
        int dy[]={1,-1,0,1,-1,0,1,-1};
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int s=a[i][j];
                int c=1;
                for(int k=0;k<8;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x>=0&&x<n&&y>=0&&y<m)
                    {
                        c++;
                        s+=a[x][y];
                    }
                }
                ans[i][j]=s/c;
            }
        }
        return ans;
    }
};