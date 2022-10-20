class Solution {
public:
    int calPoints(vector<string>&o) 
    {
        vector<int>a;
        int n=o.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(o[i]=="C")
            {
                a.pop_back();
                x--;
            }
            else if(o[i]=="D")
            {
                a.push_back(a[x-1]*2);
                x++;
            }
            else if(o[i]=="+")
            {
                a.push_back(a[x-1]+a[x-2]);
                x++;
            }
            else
            {
                a.push_back( stoi(o[i]) );
                x++;
            }
            
        }
        n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=a[i];
        return ans;
        
    }
};