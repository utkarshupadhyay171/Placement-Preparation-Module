class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2)
    {
        unordered_map<string,int>map,map2;
        int count=0;
        
        for(int i=0;i<words1.size();i++)
        {
            map[words1[i]]+=1;
        }
        for(int i=0;i<words2.size();i++)
        {
            map2[words2[i]]+=1;
        }
        unordered_map<string,int>::iterator it;
        for(int i=0;i<words1.size();i++)
        {
            if( (map.find(words1[i])!=map.end() )&& ( map2.find(words1[i])!=map.end() ))
            {
                if((map[words1[i]]==1)&&(map2[words1[i]]==1))
                    count+=1;
            }
        }
        return count;
        
    }
};