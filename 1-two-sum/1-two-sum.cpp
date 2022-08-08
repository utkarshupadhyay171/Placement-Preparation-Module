class Solution {
public:
    vector<int> twoSum(vector<int>&v, int target)
    {
        unordered_map<int,int>map;
        unordered_map<int,int>m;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<v.size();i++)
        {
            if(map.find(target-v[i])!=map.end())
                m[i]=map[target-v[i]];
            map[v[i]]=i;
        }
        vector<int>ans;
        for(it=m.begin();it!=m.end();it++)
        {
            ans.push_back(it->first);
            ans.push_back(it->second);
        }
        return ans;
          
    }
};