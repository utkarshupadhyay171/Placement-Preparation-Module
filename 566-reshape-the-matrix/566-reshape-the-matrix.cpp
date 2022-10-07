class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>&A, int r, int c) 
    {
        int n=A.size();
        int m=A[0].size();
        if(n*m!=r*c) return A;
        vector<int>t;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                t.push_back(A[i][j]);
        }
        vector<vector<int>>ans(r,vector<int>(c,0));int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=t[k];
                k++;
            }
            
        }
        return ans;
        
    }
};