class Solution {
public:
    int numSquares(int n) 
    {
        
        if(n<=3)
            return n;
        
        
        int *a=new int[n+1];
        
        a[0]=0;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        
        for(int i=4;i<=n;i++)
        {
            a[i]=i;
            
            for(int j=1 ; j<=ceil(sqrt(i)) ; j++)
            {
                int temp=j*j;
                if(temp<=i)
                    a[i]=min( a[i] , 1+a[i-temp] );
            }
            
        }
        
        return a[n];
        
        
        
    }
};