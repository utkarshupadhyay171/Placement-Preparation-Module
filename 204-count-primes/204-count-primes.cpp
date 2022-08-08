class Solution {
public:
    int countPrimes(int n) 
    {
        if(n<2)
            return 0;
        bool is[n+1];
        for(int i=0;i<n;i++)
            is[i]=true;
        is[0]=false;
        is[1]=false;
        int c=0;
        for(int i=2;i*i<n;i++)
        {
            if(is[i]==true)
            {
                for(int j=i*i;j<n;j+=i)
                    is[j]=false;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(is[i]==true)
                c+=1;
        }
        return c;
    }
};