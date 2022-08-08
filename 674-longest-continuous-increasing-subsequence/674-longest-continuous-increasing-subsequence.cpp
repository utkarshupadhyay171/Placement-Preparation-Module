class Solution {
public:
    int findLengthOfLCIS(vector<int>&a) 
    {
        
        int n=a.size();
        int output[n];
        
        output[0]=1;
        for(int i=1;i<n;i++)
        {
            output[i]=1;
            if(a[i]>a[i-1])
                output[i]=output[i-1]+1;
        }
        
        int max=-1;
        for(int i=0;i<n;i++)
        {
            if(max<output[i])
                max=output[i];
        }
        return max;
        
        
    }
};