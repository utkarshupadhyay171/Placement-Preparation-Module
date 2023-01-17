class Solution {
public:
    vector<int> twoSum(vector<int>&a, int t) 
    {
        vector<int>v;
        unordered_map<int,int>map;
        for(int i=0;i<a.size();i++)
        {
            if(map.find(t-a[i])!=map.end())
            {
                v.push_back(i);v.push_back(map[t-a[i]]);
                break;
            }
            map[a[i]]=i;
        }
        return v;
    }
};