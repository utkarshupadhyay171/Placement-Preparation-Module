class Solution {
public:
    bool isHappy(int n) {
        {
            int r,s;
            if(n==1 || n==7)
                return true;
            while(n>9)
            {
                s=0;
                while(n!=0)
                {
                    r=n%10;
                    s=s+(r*r);
                    n=n/10;
                    
                }
                n=s;
            }
            if(n==1||n==7)
             return true;
            else
                return false;
        }
        
    }
};