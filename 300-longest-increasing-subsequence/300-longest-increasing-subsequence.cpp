class Solution {
public:
    int lengthOfLIS(vector<int>& a) 
    {
        int n=a.size();
        int output[n];
        output[0]=1;
        for(int i=1;i<n;i++)
        {
            output[i]=1;
            int j=i-1;
            while(j>=0)
            {
                if(a[i]>a[j])
                    output[i]=max(output[i],output[j]+1);
                j--;
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(ans<output[i])
                ans=output[i];
        }
        return ans;
    }
};