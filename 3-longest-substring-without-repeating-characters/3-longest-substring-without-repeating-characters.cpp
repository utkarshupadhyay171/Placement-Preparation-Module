class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int l=s.size();
        unordered_map<char,int>map;
        int left=0,right=0,length=0;
        while(right<l)
        {
            if(map.find(s[right])!=map.end())
            {
                left=max(left,map[s[right]]+1);
            }
            map[s[right]]=right;
            length=max(length,right-left+1);
            right++;
        }
        return length;
            
        
    }
};