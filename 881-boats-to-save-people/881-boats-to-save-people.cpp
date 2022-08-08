class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        int count=0;
        int ans=0;
        int l=0,r=people.size()-1;
        sort(people.begin(),people.end());
        while(l<=r)
        {
            if(people[l]+people[r]<=limit)
            {
                count+=1;
                l++;r--;
            }
            else
            {
                count+=1;
                r--;
            }
        }
            
        
        return count;
        
        
    }
};