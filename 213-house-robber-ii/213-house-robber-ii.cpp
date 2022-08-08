class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size()<2)
            return nums[0];
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            int p=nums[i]+prev2;
            int np=prev;
            int curr=max(p,np);
            prev2=prev;
            prev=curr;
        }
        int ans1=prev;
        prev2=0;
        prev=nums[1];
        for(int i=2;i<nums.size();i++)
        {
            int p=nums[i]+prev2;
            int np=prev;
            int curr=max(p,np);
            prev2=prev;
            prev=curr;
        }
        int ans2=prev;
        return max(ans1,ans2);
    }
};