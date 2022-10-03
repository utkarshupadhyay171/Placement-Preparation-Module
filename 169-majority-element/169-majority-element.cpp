class Solution {
public:
    int majorityElement(vector<int>&a) 
    {
        int n=a.size();
        int m=a[0];
        int x=a[0];
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==x)
            {
                x=a[i];
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    c=1;
                    m=a[i];
                    x=a[i];
                }
                
            }
        }
        return m;
    }
};