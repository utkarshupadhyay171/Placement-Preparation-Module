class Solution {
public:
    void sortColors(vector<int>& a) 
    {
        int start=0;
        int end=a.size()-1;
        int i=0;
        
        while(i<=end)
        {
            if(a[i]==0)
            {
                swap(a[i],a[start]);
                i++;start++;
            }
            else if(a[i]==2)
            {
                swap(a[i],a[end]);
                end--;
            }
            else
                i++;
        }
        
    }
};