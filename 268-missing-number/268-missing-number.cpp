class Solution {
public:
    int missingNumber(vector<int>& a) 
    {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
            ans^=i^a[i];
        return ans^n;
    }
};