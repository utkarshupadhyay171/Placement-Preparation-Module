class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i=0;
        for(auto c:nums)
        {
            if(i==0||i==1||nums[i-2]!=c)
            {
                nums[i]=c;
                i++;
            }
        }
        return i;
    }
};