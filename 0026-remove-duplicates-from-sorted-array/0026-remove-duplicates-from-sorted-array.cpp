class Solution {
public:
    int removeDuplicates(vector<int>&a) 
    {
        int j=1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1]!=a[i])
            {
                a[j]=a[i];
                j++;
            }
        }
        return j;
    }
};