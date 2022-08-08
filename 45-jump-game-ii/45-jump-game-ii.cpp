class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int jump=0;
        int maxr=0;
        int curreach=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxr=max(maxr,nums[i]+i);
            
            
            if(i==curreach)
            {
                jump++;
                curreach=maxr;
            }
          
            
        }
        return jump;
        
    }
};