class Solution {
public:
    int thirdMax(vector<int>&a) 
    {
        
        sort(a.begin(),a.end());
        vector<int>t;
        t.push_back(a[0]);
        for(int i=1;i<a.size();i++)
        {
            if(a[i]!=a[i-1])
                t.push_back(a[i]);
        }
        
        sort(t.begin(),t.end(),greater<int>());
        if(t.size()<3)
            return *max_element(t.begin(),t.end());
        int c=0;
        for(int i=0;i<3;i++)
        {
            c=t[i];
            
        }
        return c;
            
        
    }
};