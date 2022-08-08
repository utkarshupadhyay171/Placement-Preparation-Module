class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=1;
        int majority=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(majority==nums[i])
                count++;
            if(majority!=nums[i])
            {
                count--;
            }
            if(count==0)
            {
                count++;
                majority=nums[i];
            }
        }
        return majority;
    }
};