class Solution {
public:
    
    
    int threeSumMulti(vector<int>& a, int t) 
    {
        int mod=1e9+7;
        long ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            int p=t-a[i];
            int j=i+1;
            int k=a.size()-1;
            while(j<k)
            {

                if(a[j]+a[k]>p)
                k--;
                else if(a[j]+a[k]<p)
                j++;
                else if(a[j]!=a[k])
                {
                    int left=1;
                    int right=1;
                    while(j+1<k&&a[j]==a[j+1])
                    {
                        left++;
                        j++;
                    }
                    while(k-1>j&&a[k]==a[k-1])
                    {
                        right++;
                        k--;
                    }
                    ans+=left*right;
                    ans%=mod;
                    j++;
                k--;
                }
                else
                {
                    ans+=(k-j+1)*(k-j)/2;
                    ans%=mod;
                    break;
                }
            }

            
        }
        return (int)ans;
    }

    
};