class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<nums.size();i++)    
        {
            if(nums[i]==nums[i-1])
                nums[j++]=nums[i];
        }
        int k=nums.size()-j;
        while(k--)
            nums.pop_back();
        return nums;
    }
};