class Solution {
public:
    int distributeCandies(vector<int>&a)
    {
        int n=a.size();
        int c=n/2;
        int x=0;
        unordered_map<int,int>map;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<n;i++)
            map[a[i]]+=1;
        for(it=map.begin();it!=map.end();it++)
        {
            x+=1;
        }
        if(x>c)
            return c;
        return x;
        
        
        
    }
};