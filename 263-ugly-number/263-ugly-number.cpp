class Solution {
public:
    bool isUgly(int n) 
    {
        if(n==0)
            return false;
        int a[]={2,3,5};
        
        for(int i=0;i<3;i++)
        {
            while(n%a[i]==0)
            {
                n=n/a[i];
            }
        }
        if(n==1)
            return true;
        else 
            return false;
        
    }
};