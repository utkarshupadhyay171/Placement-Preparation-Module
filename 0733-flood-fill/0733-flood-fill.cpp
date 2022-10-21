class Solution {
public:
    
    void help(vector<vector<int>>&a,int sr,int sc,int c,int p,int n,int m)
    {
        if(sr<0||sr>n-1||sc<0||sc>m-1)
            return ;
            
        if(a[sr][sc]!=p)
            return ;
        
        a[sr][sc]=c;
        help(a,sr+1,sc,c,p,n,m);
        help(a,sr,sc+1,c,p,n,m);
        help(a,sr-1,sc,c,p,n,m);
        help(a,sr,sc-1,c,p,n,m);
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>&a, int sr, int sc, int c)
    {
        if(a[sr][sc]==c)    
            return a;
        int n=a.size();
        int m=a[0].size();
        int p=a[sr][sc];
        help(a,sr,sc,c,p,n,m);
        return a;
    }
};