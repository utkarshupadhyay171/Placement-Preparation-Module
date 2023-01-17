class Solution {
public:
    void moveZeroes(vector<int>&a) 
    {
        int k=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=0)
            {
                swap(a[k++],a[i]);
            }
        }
        
    }
};