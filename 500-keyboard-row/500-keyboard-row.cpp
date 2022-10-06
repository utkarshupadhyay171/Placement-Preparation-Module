class Solution {
public:
    vector<string> findWords(vector<string>&n)
    {
        string a="qwertyuiopQWERTYUIOP";
        string b="asdfghjklASDFGHJKL";
        string c="zxcvbnmZXCVBNM";
        unordered_map<char,int>p,q,r;
        
        for(int i=0;i<a.size();i++)
            p[a[i]]=1;
        for(int i=0;i<b.size();i++)
            q[b[i]]=1;
        for(int i=0;i<c.size();i++)
            r[c[i]]=1;
        
        
        int l=n.size();
        vector<string>ans;
        
        for(int i=0;i<l;i++)
        {
            string str=n[i];
            int m=str.size();
            bool x=false,y=false,z=false;
            for(int j=0;j<m;j++)
            {
                if(p.find(str[j])!=p.end())
                    x=true;
                if(q.find(str[j])!=q.end())
                    y=true;
                if(r.find(str[j])!=r.end())
                    z=true;
            }
            if(x&&!y&&!z)
                ans.push_back(str);
            if(!x&&!y&&z)
                ans.push_back(str);
            if(!x&&y&&!z)
                ans.push_back(str);
 
        }
        return ans;
        
    }
};