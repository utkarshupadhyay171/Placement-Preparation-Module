class Solution {
public:
    void moveZeroes(vector<int>&v) 
    {
        for(int last=0,curr=0;curr<v.size();curr++)
        {
            if(v[curr]!=0)
            {
                swap(v[last++],v[curr]);
            }
        }
    }
};