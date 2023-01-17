class Solution {
public:
    int islandPerimeter(vector<vector<int>>&a) 
    {
        int ans=0;
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==0)
                    continue;
                
                int x=0,y=0;
                if(i+1<n)
                {
                    if(a[i+1][j]==1)
                        x+=1;
                }
                if(i>0)
                {
                    if(a[i-1][j]==1)
                        x+=1;
                }
                if(j+1<m)
                    if(a[i][j+1]==1)
                        y+=1;
                if(j>0)
                    if(a[i][j-1]==1)
                        y+=1;
                ans+=4-x-y;
            }
        }
        return ans;
    }
};