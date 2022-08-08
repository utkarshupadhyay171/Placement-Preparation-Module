class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int i=0;
        for(auto c:nums)
        {
            if(c!=val)
            {
                nums[i]=c;
                i++;
            }
        }
        return i;
    }
};