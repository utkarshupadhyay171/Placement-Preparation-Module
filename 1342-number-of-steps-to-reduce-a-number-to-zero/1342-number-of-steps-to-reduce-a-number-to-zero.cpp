class Solution {
public:
    int numberOfSteps(int num) {
        
        
        int ans[num+1];
        ans[0]=0;
        for(int i=1;i<=num;i++)
        {
            int a=ans[i-1];
            int b=INT_MAX;
            
            if(i%2==0)
                b=ans[i/2];
            
            int d=1+min(a,b);
            ans[i]=d;
            
        }
        return ans[num];
        
    }
};