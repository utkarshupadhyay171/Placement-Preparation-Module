class Solution {
public:
    
    int mins(int i,int j,int n,vector<vector<int>>&A,vector<vector<int>>&dp)
    {
        if(dp[i][j]!=-1)    return dp[i][j];
        if(i==n) return A[i][j];
        
        int bot=A[i][j]+mins(i+1,j,n,A,dp);
        int bot2=A[i][j]+mins(i+1,j+1,n,A,dp);
        
        dp[i][j]=min(bot,bot2);
        return min(bot,bot2);
        
    }
    
    int minimumTotal(vector<vector<int>>& A)
    {
        int n=A.size();
        int m=A[n-1].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return mins(0,0,n-1,A,dp);
    }
};