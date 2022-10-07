class Solution {
public:
    string convertToTitle(int n)
    {
        unordered_map<int,char>map;
        for(int i=1;i<=26;i++)
        {
            map[i]='A'+i-1;
        }

        string ans="";
        
        while(n)
        {
            int x=n%26;
            if(x!=0) {
                ans+=map[x];

            }
            else {
                ans+='Z';
                n=n/26-1;
                continue;
            }
            n=n/26;

        }
        
            
        
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};