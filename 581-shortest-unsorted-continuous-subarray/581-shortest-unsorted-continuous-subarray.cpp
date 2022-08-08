class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int mi=INT_MAX;
        int ma=INT_MIN;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
                mi=min(mi,nums[i]);
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
                ma=max(ma,nums[i]);
        }
        if(mi==INT_MAX&&ma==INT_MIN) return 0;
        int start;int end;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mi)
            {
                start=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            
            if(nums[i]<ma)
            {
                end=i;
                break;
            }
        }
       
        return end-start+1;
        
    }
};