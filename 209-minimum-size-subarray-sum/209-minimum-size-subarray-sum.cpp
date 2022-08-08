class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int left=0,i=0,curr=0,l=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            if(curr>=target)
            {
                while(curr>=target)
                {
                    l=min(l,i-left+1);
                    curr-=nums[left];
                    left++;
                }
            }
        }
        return l==INT_MAX?0:l;
    }
};