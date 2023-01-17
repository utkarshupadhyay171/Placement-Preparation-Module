class Solution {
public:
    int singleNumber(vector<int>&a) 
    {
        int ans=a[0];
        for(int i=1;i<a.size();i++)    
        {
            ans^=a[i];
        }
        return ans;
    }
};