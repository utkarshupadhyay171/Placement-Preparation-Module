class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>&a) 
    {
        int n=a.size();
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=1;i<=n;i++)
            map[i]=0;
        for(int i=0;i<n;i++)
            map[a[i]]=1;
        for(int i=1;i<=n;i++)
            if(map[i]==0)
                ans.push_back(i);
        return ans;
    }
};