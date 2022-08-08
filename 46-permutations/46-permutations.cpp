class Solution {
public:
    
    void count(vector<int>&a,unordered_map<int,bool>map,vector<int>v,vector<vector<int>>&ans)
    {
        if(v.size()==a.size())
        {
            ans.push_back(v);
            return;
        }

        for(int i=0;i<a.size();i++)
        {
            if(map[a[i]]==false)
            {
                map[a[i]]=true;
                v.push_back(a[i]);
                count(a,map,v,ans);
                map[a[i]]=false;
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>&a)
    {
        
        vector<int>v;
        vector<vector<int>>ans;
        unordered_map<int,bool>map;

        for(int i=0;i<a.size();i++)
        map[a[i]]=false;
        count(a,map,v,ans);
        return ans;

        
        
        
    }
};