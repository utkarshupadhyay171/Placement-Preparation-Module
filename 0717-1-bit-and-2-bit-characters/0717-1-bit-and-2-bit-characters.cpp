class Solution {
public:
    bool isOneBitCharacter(vector<int>&a) 
    {
        int n=a.size();
        if(n==1)
            return true;
        int i=0;
        while(i<=n-2)
        {
            if(a[i]==0)
                i++;
            else
                i+=2;
        }
        if(i<=n-1)
            return true;
        else 
            return false;
    }
};