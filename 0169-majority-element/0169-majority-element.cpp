class Solution {
public:
    int majorityElement(vector<int>&a) 
    {
        int maxe=a[0];
        int maxf=1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==maxe)
            {
                maxf+=1;
            }
            else if(a[i]!=maxe&&maxf!=0)
            {
                maxf-=1;
                if(maxf==0)
                    maxe=a[i];
            }
            else
            {
                maxf=1;
                maxe=a[i];
            }
        }
        return maxe;
        
    }
};