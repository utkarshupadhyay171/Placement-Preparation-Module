class Solution {
public:
    vector<int> findErrorNums(vector<int>& n) 
    {
        unordered_map<int,int>map;
        int l=n.size();
        vector<int>ans;
        for(int i=0;i<l;i++)
        {
            if(map.find(n[i])!=map.end())
            {
                ans.push_back(n[i]);
            }
            map[n[i]]=1;
        }
        for(int i=1;i<=l;i++)
        {
            if(map[i]==0)
                ans.push_back(i);
        }
        return ans;
        
    }
};