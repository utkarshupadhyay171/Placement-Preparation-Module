class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int curreach=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(curreach>=nums.size())
                return true;
            if(curreach<i)
                return false;
            curreach=max(curreach,nums[i]+i);
        }
        return true;
    }
};