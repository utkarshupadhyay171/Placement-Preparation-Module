class Solution {
public:
    vector<int> intersection(vector<int>&a, vector<int>&b)
    {
        unordered_map<int,int>m1,m2;
        unordered_map<int,int>::iterator it;
        int n=a.size();
        int n2=b.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
            m1[a[i]]+=1;
        for(int i=0;i<n2;i++)
            m2[b[i]]+=1;
        for(it=m1.begin();it!=m1.end();it++)
        {
            if(m2.find(it->first)!=m2.end())
                ans.push_back(it->first);
        }
        return ans;
        
        
    }
};