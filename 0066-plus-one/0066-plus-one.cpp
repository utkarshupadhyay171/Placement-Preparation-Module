class Solution {
public:
    vector<int> plusOne(vector<int>&a) 
    {
        int c=1;
        vector<int>ans;
        for(int i=a.size()-1;i>=0;i--)
        {
            int x=a[i]+c;
            if(x>9)
            {
                x=x%10;
                c=1;
            }
            else c=0;
            ans.push_back(x);
        }
        if(c==1) ans.push_back(1);
        reverse(ans.begin(),ans.end()) ;
        return ans;
        
    }
};