class Solution {
public:
    bool containsDuplicate(vector<int>&a)
    {
        unordered_map<int,int>map;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(map.find(a[i])!=map.end())
                return true;
            else
                map[a[i]]=1;
        }
        return false;
    }
};