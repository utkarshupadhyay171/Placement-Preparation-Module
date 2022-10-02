class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>>a;
        for(int i=0;i<n;i++)
        {
            vector<int>t;
            for(int j=0;j<=i;j++)
                t.push_back(1);
            a.push_back(t);
        }
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j-1>=0) 
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
        return a;
    }
    
};