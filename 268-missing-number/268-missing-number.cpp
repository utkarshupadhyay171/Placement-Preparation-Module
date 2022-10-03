class Solution {
public:
    int missingNumber(vector<int>&a) 
    {
        unordered_map<int,int>map;
        int n=a.size();
        for(int i=0;i<=n;i++)
            map[i]=0;
        for(int i=0;i<n;i++)
        {
            map[a[i]]+=1;
        }
        for(int i=0;i<=n;i++)
            if(map[i]==0)
                return i;
        return n;
        
    }
};