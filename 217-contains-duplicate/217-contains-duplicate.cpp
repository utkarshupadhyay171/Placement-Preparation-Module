class Solution {
public:
    bool containsDuplicate(vector<int>&a)
    {
        int n=a.size();
        int c=1;
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                c+=1;
            }
            else 
                c=1;
            if(c==2)
                return true;
            
        }
        return false;
    }
};