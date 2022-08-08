class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        priority_queue< pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        unordered_map<int,int>map;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]+=1;
        }
        unordered_map<int,int>::iterator it;
        for(it=map.begin();it!=map.end();it++)
        {
            pq.push(make_pair(it->second,it->first));
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};