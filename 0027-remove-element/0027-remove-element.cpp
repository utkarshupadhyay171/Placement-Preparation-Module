class Solution {
public:
    int removeElement(vector<int>&a, int k) 
    {
        int j=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=k)
            {
                a[j]=a[i];
                j++;
            }
        }
        return j;
        
    }
};