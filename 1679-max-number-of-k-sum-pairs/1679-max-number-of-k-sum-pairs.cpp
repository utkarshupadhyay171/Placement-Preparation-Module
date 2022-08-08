class Solution {
public:
    int maxOperations(vector<int>& nums, int k)
    {
        unordered_map<int,int>map;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            int ans=k-nums[i];
            if(map.find(ans)!=map.end()&&map[ans]>0)
            {
                c+=1;
                map[ans]--;
            }
            else
            map[nums[i]]++;
        }
        return c;
        
        
    }
};