class Solution {
public:
    bool containsDuplicate(vector<int>&a)
    {
        
        unordered_map<int,int>map;
        for(int i=0;i<a.size();i++)
        {
            map[a[i]]+=1;
            if(map[a[i]]>1)
                return true;
        }
        return false;
        
    }
};