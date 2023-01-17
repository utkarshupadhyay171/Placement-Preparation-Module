class Solution {
public:
    vector<int> intersect(vector<int>&a, vector<int>&b) 
    {
        vector<int>ans;
        unordered_map<int,int>m1,m2;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<a.size();i++)
            m1[a[i]]+=1;
        for(int i=0;i<b.size();i++)
            m2[b[i]]+=1;
        for(it=m1.begin();it!=m1.end();it++)
        {
            if(m2.find(it->first)!=m2.end())
            {
                int x=min(it->second,m2[it->first]);
                for(int i=0;i<x;i++)
                    ans.push_back(it->first);
            }
        }
        return ans;
        
    }
};