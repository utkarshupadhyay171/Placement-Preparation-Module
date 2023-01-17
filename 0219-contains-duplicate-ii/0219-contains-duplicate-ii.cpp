class Solution {
public:
    bool containsNearbyDuplicate(vector<int>&a, int k)
    {
        int n=a.size();
        unordered_map<int,int>map;
        for(int i=0;i<=k&&i<n;i++)
        {
            map[a[i]]+=1;
            if(map[a[i]]>1)
                return true;
        }
        for(int i=0,j=k+1;i<n&&j<n;i++,j++)
        {
            map[a[i]]--;
            map[a[j]]++;
            if(map[a[j]]>1)
                return true;
        }
        return false;
    }
};