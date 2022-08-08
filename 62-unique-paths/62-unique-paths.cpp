class Solution {
public:
    
    int unique(int m,int n,vector<vector<int>>&dp)
    {
        if(m==0&&n==0)
        {
            dp[0][0]=1;
            return 1;
        }
        if(m<0||n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int left=unique(m,n-1,dp);
        int up=unique(m-1,n,dp);
        dp[m][n]=left+up;
        return left+up;
        
    }
    
    int uniquePaths(int m, int n)
    {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return unique(m-1,n-1,dp);
    }
};