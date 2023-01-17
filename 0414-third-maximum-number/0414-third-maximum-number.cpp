class Solution {
public:
    int thirdMax(vector<int>&v)
    {
        long long a=LONG_MIN,b=LONG_MIN,c=LONG_MIN;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==a||v[i]==b||v[i]==c)
                continue;
            
            if(v[i]>a)
            {
                c=b;
                b=a;
                a=v[i];
            }
            else if(v[i]>b)
            {
                c=b;
                b=v[i];
            }
            else if(v[i]>c)
                c=v[i];
        }
        if(c==LONG_MIN)
        return a;
        return c;
    }
};