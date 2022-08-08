class Solution {
public:
    double myPow(double x, int n)
    {
        double ans=1;
        if(n==INT_MIN)//edge case;
        {
            if(x>1) return 0;
            else return 1;
        }
        
        if(n==0)
            return 1;
        if(x==1)
            return x;
        if(n<0)
        {
            n=-n;
            x=1/x;
        }
        double a=myPow(x,n/2);
        a*=a;
        if(n%2!=0)
            a=a*x;
            
        return ans*a;
    }
};